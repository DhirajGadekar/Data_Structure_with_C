#include<stdio.h>
#include<string.h>

typedef struct Music_Player{

	char Song_Name[20];
	int song_no;
	float song_time;
	struct Music_Player *next;
}Music_Player;

void main(){
	
	Music_Player Obj1,Obj2,Obj3;

	Music_Player *head = &Obj1;

	strcpy((*head).Song_Name,"Centuries");
	(*head).song_no = 1;
       	(*head).song_time = 5.23;
	head->next = &Obj2;

	strcpy(head->next->Song_Name,"Believer");
	head->next->song_no = 2;
       	head->next->song_time = 4.33;
	head->next->next = &Obj3;
		
	
	strcpy(head->next->next->Song_Name,"Thunder");
	head->next->next->song_no = 3;
       	head->next->next->song_time = 4.56;
	head->next->next->next = NULL;

	printf("Song Name = %s\n",head->Song_Name);
	printf("Song Number = %d\n",head->song_no);
	printf("Song Timing = %.2f Min\n",head->song_time);
	
	printf("Song Name = %s\n",head->next->Song_Name);
	printf("Song Number = %d\n",head->next->song_no);
	printf("Song Timing = %.2f Min\n",head->next->song_time);
	
	printf("Song Name = %s\n",head->next->next->Song_Name);
	printf("Song Number = %d\n",head->next->next->song_no);
	printf("Song Timing = %.2f Min\n",head->next->next->song_time);
}

