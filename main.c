#include <kipr/wombat.h>


//this code is for our Roomba. It starts in the corner of the starting box and then navigates along the center black line to collect pompoms. 
//It spins around at the transporter and then returns back to the starting box while pushing the pompoms.
int main()
{
 create_connect();
    
  
  create_drive_direct(500,500);
  msleep(1000);
 //speed to 200 because 500 was too fast and we were losing pompoms out of our bulldozer
  create_drive_direct(-200,200);
  msleep(1000);
  create_drive_direct(500,500);
  msleep(450);
  create_drive_direct(200,-200);
  msleep(1000);
  create_drive_direct(500,500);
  msleep(2400);
  create_drive_direct(250,0);
  msleep(3000);
  create_drive_direct(500,500);
  msleep(2500);
  

    
    
     
    create_stop();
    
    return 0;
}
