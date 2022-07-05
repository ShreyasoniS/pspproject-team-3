/* Getting registered for admission into colleges based on your intermediate marks
          Dev:Team-03
          DOE:30/06/2022*/
#include<stdio.h>
#include<stdlib.h>
struct student
{
	int intermarks;
	char name[10];
};
void registration();
void main()
{
	struct student s1,*p=&s1;
	int ch,J,C;
	printf("enter your name\n");		
    scanf("%s",s1.name);
	printf("enter your intermarks\n");
    scanf("%d",&s1.intermarks);
if(s1.intermarks>=900)
   { 
	 printf("admissions are available in\n");
	 printf("\t1.SR UNIVERSITY\n");
     printf("\t2.KITSW\n");
   	 printf("\t3.VAAGDEVI\n");
	 printf("\t4. CDC\n");
	 printf("\t5.EXIT\n");
	 printf("enter your choice\n");
	 scanf("%d",&ch);
	 switch(ch)
	 {
    	if(ch==1)
	 	{
		 
	 	case 1:printf("SRUNIVERSITY\n");
		printf("choose course\n");
		printf("\t1.CSE\n");
		printf("\t2.ECE\n");
		printf("\t3.EEE\n"); 
		printf("\t4.MECH\n");
		printf("\t5.CIVIL\n");
		printf("\t6.EXIT\n");
		printf("choose course\n");
		scanf("%d",&ch);
		switch(ch)
		{
			if(ch==1)
			case 1:printf("cse\n");
		if(s1.intermarks>=970)
		{
		printf("addmission available\n");
		printf("choose sub-course\n");
		printf("\t1.Csd\n");
		printf("\t2.CEs(al)\n");
		printf("\t3.cse(m1)\n");
		printf("choose course\n");
		scanf("%d",&J);
		switch(J)
		{
			if(J==1)
		        case 1:printf("csd\n");
		        if(s1.intermarks>=995)
		        {
		        printf("u r eligible for csd\n");
		        registration();
		    }
		        else 
		        printf("u r not eligible\n");
		        break;
		        if(J==2)
		        case 2:printf("csE(AL)\n");
		        if(s1.intermarks>=980&&s1.intermarks<995)
		        {
		        printf("u r eligible for cse(al)\n");
		        registration();
		    }
		        else 
		        printf("u r not eligible cse(al)\n");
		        break;
		        if(J==3)
		        case 3:printf("cse(m1)\n");
		        if(s1.intermarks>=970&&s1.intermarks<980)
		        {
		        printf("u r eligible for cs(m1)\n");
		        registration();
		    }
		        else 
		        printf("u r not eligible\n");
		        break;
		    }
		   
		}
		else
		    printf("admission is not available\n");
		exit(0);
		if(ch==2)
		case 2 :printf("ECE\n");
		{
		if(s1.intermarks>=950)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		break;
		}
		case 3 :printf("EEE\n");
		if(ch==3) 
		{
		if(s1.intermarks>=930)
		{
		printf("admission available\n");
		registration();
	    }
		else
		printf("admission not available\n");
		break;
	    }
	    case 4 :printf("CIVIL\n");
	    if(ch==4) 
		{
		if(s1.intermarks>=920)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		break;
	    }
	    case 5:printf("MECH\n");
	    if(ch==5) 
		{
		if(s1.intermarks>=900)
		{
		printf("admission available\n");
		registration();
	    }
		else
		printf("admission not available\n");
		break;
	}
        }
        	break;
    	if(ch==2)
		{
		 case 2 : printf("KITSW\n");
		{
		printf("\t1.CSE\n");
		printf("\t2.ECE\n");
		printf("\t3.EEE\n");
		printf("\t4.MECH\n");
		printf("\t5.CIVIL\n");
		printf("choose course\n");
		scanf("%d",&ch);
		switch(ch)
		{
			
	    if(ch==1)
	    case 1:printf("cse\n");
		{
		if(s1.intermarks>=950)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
		if(ch==2)
		{
		if(s1.intermarks>=930)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
		}
		if(ch==3) 
		{
		if(s1.intermarks>=920)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==4) 
		{
		if(s1.intermarks>=820)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==5) 
		{
		if(s1.intermarks>=800)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
     	}
     }
       }
     if(ch==3)
     {
		case 3 : printf("VAAGDEVI\n");
		{
		printf("\t1.CSE\n");
		printf("\t2.ECE\n");
		printf("\t3.EEE\n");
		printf("\t4.MECH\n");
		printf("\t4.CIVIL\n");
		printf("choose course\n");
			scanf("%d",&ch);
		if(ch==1)
		{
		if(s1.intermarks>=770)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
		if(ch==2)
		{
		if(s1.intermarks>=750)
		printf("admission available\n");
		else
		printf("admission not available\n");
		exit(0);
		}
		if(ch==3) 
		{
		if(s1.intermarks>=730)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==4) 
		{
		if(s1.intermarks>=720)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==5) 
		{
		if(s1.intermarks>=700)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
		}
	
     }
   	 if(ch==4)
	 {
		case 4 : printf("CDC\n");
		{
		printf("\t1.CSE\n");
		printf("\t2.ECE\n");
		printf("\t3.MECH\n");
		printf("\t4.EEE\n");
		printf("\t5.CIVIL\n");
		printf("choose course\n");
		scanf("%d",&ch);
		if(ch==1)
		{
		if(s1.intermarks>=670)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
		if(ch==2)
		{
		if(s1.intermarks>=650)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
		}
		if(ch==3) 
		{
		if(s1.intermarks>=630)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==4) 
		{
		if(s1.intermarks>=620)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==5) 
		{
		if(s1.intermarks>=600)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
		}
      }
}
   } 
}
 else if(s1.intermarks>=800)
   {
	  {
		printf("admissions are available in\n");
     	printf("\t1.KITSW\n");
    	printf("\t2.VAAGDEVI\n");
    	printf("\t3. CDC\n");
    	printf("enter your choice\n");
    	scanf("%d",&ch);
     }
     	switch(ch)
      {
	  if(ch==1)
	   {
		case 1 : printf("KITSW\n");
		{
		printf("\t1.CSE\n");
		printf("\t2.ECE\n");
		printf("\t3.EEE\n");
		printf("\t4.MECH\n");
		printf("\t5.CIVIL\n");
		printf("choose course\n");
		scanf("%d",&ch);
		}
	    if(ch==1)
		{
		if(s1.intermarks>=870)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
		if(ch==2)
		{
		if(s1.intermarks>=850)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
		}
		if(ch==3) 
		{
		if(s1.intermarks>=830)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==4) 
		{
		if(s1.intermarks>=820)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==5) 
		{
		if(s1.intermarks>=800)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
     }		    
       }
       switch(ch)
      if(ch==2)
    	{
	
		case 2 : printf("VAAGDEVI\n");
		{
		printf("\t1.CSE\n");
		printf("\t2.ECE\n");
		printf("\t3.EEE\n");
		printf("\t4.MECH\n");
		printf("\t4.CIVIL\n");
		printf("choose course\n");
			scanf("%d",&ch);
		if(ch==1)
		{
		if(s1.intermarks>=770)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
		if(ch==2)
		{
		if(s1.intermarks>=750)
		{
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
		}
		if(ch==3) 
		{
		if(s1.intermarks>=730)
		{
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==4) 
		{
		if(s1.intermarks>=720){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==5) 
		{
		if(s1.intermarks>=700){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
	    }
		}	
      }
      switch(ch){
    	if(ch==3)
		case 3 : printf("CDC\n");
		{
		printf("\t1.CSE\n");
		printf("\t2.ECE\n");
		printf("\t3.MECH\n");
		printf("\t4.EEE\n");
		printf("\t5.CIVIL\n");
		printf("choose course\n");
		scanf("%d",&ch);
		if(ch==1)
		{
		if(s1.intermarks>=870){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
	    }
		if(ch==2)
		{
		if(s1.intermarks>=850){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
		}
		if(ch==3) 
		{
		if(s1.intermarks>=830){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==4) 
		{
		if(s1.intermarks>=820){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==5) 
		{
		if(s1.intermarks>=800){
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
	    }
               }
       }
   }
else if(s1.intermarks>=700) 
   {
     	printf("admissions are available in\n");
     	printf("\t1.VAAGDEVI\n");
    	printf("\t2.CDC\n");
    	printf("enter your choice\n");
    	scanf("%d",&ch);
    	switch(ch)
    	{
    	if(ch==1)
		case 1 : printf("VAAGDEVI\n");
		{
		printf("\t1.CSE\n");
		printf("\t2.ECE\n");
		printf("\t3.EEE\n");
		printf("\t4.MECH\n");
		printf("\t4.CIVIL\n");
		printf("choose course\n");
			scanf("%d",&ch);
		if(ch==1)
		{
		if(s1.intermarks>=770){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
	    }
		if(ch==2)
		{
		if(s1.intermarks>=750){
		printf("admission available\n");
		registration();
	}
		else
		printf("admission not available\n");
		exit(0);
		}
		if(ch==3) 
		{
		if(s1.intermarks>=730){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==4) 
		{
		if(s1.intermarks>=720){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==5) 
		{
		if(s1.intermarks>=700){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    registration();
		}	
     }
     switch(ch){
    	if(ch==2)
		case 2 : printf("CDC\n");
		{
		printf("\t1.CSE\n");
		printf("\t2.ECE\n");
		printf("\t3.MECH\n");
		printf("\t4.EEE\n");
		printf("\t5.CIVIL\n");
		printf("choose course\n");
		scanf("%d",&ch);
		if(ch==1)
		{
		if(s1.intermarks>=750){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
	    }
		if(ch==2)
		{
		if(s1.intermarks>=730){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
		}
		if(ch==3) 
		{
		if(s1.intermarks>=720){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==4) 
		{
		if(s1.intermarks>=710){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
	    }
	    if(ch==5) 
		{
		if(s1.intermarks>=700){
		printf("admission available\n");
		registration();}
		else
		printf("admission not available\n");
		exit(0);
	    }
        }
      }
   }
   if(s1.intermarks<700)
      printf("colleges are not found\n");
      registration();
}
void registration()
{
	char name[20],f_name[20],m_name[20];
	   int ph,gpa,marks,ch;
	printf("enter details\n");
	printf("enter name\n");
	scanf("%s",&name);
	printf("enter your father name\n");
	scanf("%s",&f_name);
	printf("enter mother name\n");
	scanf("%s",&m_name);
	printf("enter phone number\n");
	scanf("%d",&ph);
	printf("enter u r 10 class gpa\n");
	scanf("%d",&gpa);
	printf("Your admission is registered temporarily\n");
	
}

