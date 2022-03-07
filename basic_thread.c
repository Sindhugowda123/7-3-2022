#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

void *thread_handler(void *ptr)
{
		for(int i=1;i<=5;i++)
		{
				sleep(1);
				printf("Thread is running\n");
		}
}

int main()
{
		pthread_t thread;
		char *msg = "sindhu";
		pthread_create(&thread, NULL, &thread_handler, (void *)msg);
		pthread_join(thread,NULL);
		return 0;
}
