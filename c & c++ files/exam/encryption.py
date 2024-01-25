from cryptography.hazmat.primitives.kdf.pbkdf2 import PBKDF2HMAC
from cryptography.hazmat.primitives import hashes
from cryptography.hazmat.backends import default_backend
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes
import base64

def generate_key(password, salt):
    kdf = PBKDF2HMAC(
        algorithm=hashes.SHA256(),
        iterations=100000,
        salt=salt,
        length=32,
        backend=default_backend()
    )
    return base64.urlsafe_b64encode(kdf.derive(password.encode()))

def encrypt_text(text, password):
    salt = b'salt_123'  # You should use a different salt for each encryption
    key = generate_key(password, salt)

    cipher = Cipher(algorithms.AES(key), modes.CFB, backend=default_backend())
    encryptor = cipher.encryptor()
    ciphertext = encryptor.update(text.encode()) + encryptor.finalize()

    return base64.urlsafe_b64encode(salt + ciphertext).decode()

def decrypt_text(ciphertext, password):
    data = base64.urlsafe_b64decode(ciphertext)
    salt = data[:8]  # Extract the salt from the first 8 bytes
    key = generate_key(password, salt)

    cipher = Cipher(algorithms.AES(key), modes.CFB, backend=default_backend())
    decryptor = cipher.decryptor()
    plaintext = decryptor.update(data[8:]) + decryptor.finalize()

    return plaintext.decode()

# Example usage
password = "my_secret_password"
plaintext = "Hello, this is a secret message!"

encrypted_text = encrypt_text(plaintext, password)
print("Encrypted Text:", encrypted_text)

decrypted_text = decrypt_text(encrypted_text, password)
print("Decrypted Text:", decrypted_text)
