#include <kipr/wombat.h>

int main()
{
 create_connect();
    
 
  create_drive_direct(500,500);
  msleep(1000);
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
