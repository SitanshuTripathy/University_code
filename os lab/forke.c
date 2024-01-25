#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
//#include <sys/wait.h>
int main() 
{ 
    pid_t p1,p2,p3;
    p1=fork();
    if(p1==0){
        printf("child =%d\n",getpid());
        printf("child parent =%d\n",getppid());
        p2=fork();
         if(p2==0){
        printf("child =%d\n",getpid());
        printf(" child parent =%d\n",getppid());
        for(int i=0;i<3;i++)
	{
		 p3=fork();
		if(p3==0)
		//if(ret>0)
		{
		printf("process id of child=%d\n",getpid());
			printf("process id of parent=%d\n",getppid());
		break;
		}
		printf("process id of parent=%d\n",getpid());
	}
        
         }
        else{
            wait(NULL);
        printf("pid = %d\n",getpid());
        }
    
    }
    else{ wait(NULL);
        printf("pid = %d\n",getpid());
        }
    return 0; 
} 