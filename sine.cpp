#include "sine.h"
#include "horizontal.cpp"
#include "vertical.cpp"
#include "reset.cpp"

//Function to input value from user
void SineWave :: input ()
{   
    cout<<"\n\n";
    cout<<"\t\t\t###########SINE WAVE###########\n\n\n";
    cout<<"\t\tPress"<< "1 for horizontal wave, 2 for vertical wave: ";
    cin>>choice;
        switch (choice)
        {
            case 1: horizontalWave();
		            break;
            case 2: verticalWave();
		            break;
           default: cout<<"Invalid number you entered\n";
        }    
}
   

