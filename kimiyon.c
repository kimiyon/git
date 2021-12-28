#include<stdio.h>
int main()
{
	char passage[1000];
	printf("enter the passage");
	fgets(passage ,1000 ,stdin);
	printf("%s" ,passage);
	char target[50];
	printf("enter the word to be found");
	scanf("%s" ,target);
	int length_count_of_target =0;
		for(length_count_of_target =0;target[length_count_of_target] != '\0' ;length_count_of_target++) 
		{

		}

		int len_t;
		int len_p =sizeof(passage) -1;
		int a = 0;
		int target_index =  0;
		int passage_index = 0;
		//printf("the length of target i s %d \n the length of passage %d \n" ,len_t ,len_p);

			while (a==0)
			{
				if (target[target_index] == passage[passage_index])
				{
					int h =0; 
					for(h=0;h <= length_count_of_target;h++)
					{
						if(target[target_index] ==passage[passage_index])
						{

						target_index++;
						passage_index++;
						//printf("the value of target_index : %d\n" ,target_index);

						}
					}

					if((target_index == length_count_of_target )&& (passage[passage_index] == '\0' ||' '))
					{

					//if((passage[passage_index +1 ]== ' ') || (passage[passage_index +1] == '\0')){

					printf("present");
					a++;

					}

					else
					{

					target_index = 0;

					}
				}


				else if(passage_index > len_p)
				{
				//printf("notpresent target_index ; %d",target_index);
				printf("not present");
				a++;
				}

				else
				{

				passage_index++;
				}


			}
			return 0;
}
