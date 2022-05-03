#include <iostream>

using namespace std;

int main()

{

       //declare and initialize the variables

       int cocoInventory = 0, pepsiInventory = 0,

              dryInventory = 0,hiresInventory = 0;

       const int SENTINEL = 0;

       int soldAmount = 0, ID = 0;

       cout<<"1. Coca-Cola\n2. Pepsi\n3. Canada Dry\n4. Hires\n";

       //propmt and read the inventory values of the

       //four brands

       cout<<"\nEnter the inventory value of Coca-Cola: $";

       cin>> cocoInventory;

       cout<<"Enter the inventory value of Pepsi: $";

       cin>> pepsiInventory;

       cout<<"Enter the inventory value of Canada Dry: $";

       cin>> dryInventory;

       cout<<"Enter the inventory value of Hires: $";

       cin>> hiresInventory;

       //

       cout<<"\nPlease enter ID number and amount purchased or '0' for quit: ";

       cin >> ID;

       cin >> soldAmount;

       while (ID !=SENTINEL)

       {            

              //calculate the weekly inventory.

              if (ID == 1)

              {

                     //if sold amount is positive,

                     if (soldAmount > 0)

                     {

                           //add to the inventory

                           cocoInventory += soldAmount;

                     }

                     //if sold amount is negative,

                     else if (soldAmount < 0)

                     {

                           //if inventory greater than sold

                           if (cocoInventory > -(soldAmount))

                           {

                                  //add to the inventory

                                  cocoInventory += soldAmount;

                           }

                           //otherwise, print an error message

                           else

                           {

                                  cout << "Unable to sell more than $" << (cocoInventory) << endl;

                           }

                          

                     }

              }

              else if (ID == 2)

              {

      

                     //if sold amount is positive,

                     if (soldAmount > 0)

                     {

                           //add to the inventory

                           pepsiInventory += soldAmount;

                     }

                     //if sold amount is negative,

                     else if (soldAmount < 0)

                     {

                           //if inventory greater than sold

                           if (pepsiInventory > -(soldAmount))

                           {

                                  //add to the inventory

                                  pepsiInventory += soldAmount;

                           }

                           //otherwise, print an error message

                            else

                           {

                                  cout << "Unable to sell more than $" << (pepsiInventory) << endl;

                           }

                     }

              }

              else if (ID == 3)

              {

                     //if sold amount is positive,

                     if (soldAmount > 0)

                     {

                           //add to the inventory

                           dryInventory += soldAmount;

                     }

                     //if sold amount is negative,

                     else if (soldAmount < 0)

                     {

                           //if inventory greater than sold

                           if (dryInventory > -(soldAmount))

                           {

                                  //add to the inventory

                                  dryInventory += soldAmount;

                           }

                           //otherwise, print an error message

                           else

                           {

                                  cout << "Unable to sell more than $" << (dryInventory) << endl;

                           }

                     }

              }

              else if (ID == 4)

              {

                     //if sold amount is positive,

                     if (soldAmount > 0)

                     {

                           //add to the inventory

                           hiresInventory += soldAmount;

                     }

                     //if sold amount is negative,

                     else if (soldAmount < 0)

                     {

                           //if inventory greater than sold

                           if (hiresInventory > -(soldAmount))

                           {

                                  //add to the inventory

                                  hiresInventory += soldAmount;

                           }

                           //otherwise, print an error message

                           else

                           {

                                  cout << "Unable to sell more than $" << (hiresInventory) << endl;

                           }

                     }

              }

              else

                     cout<<"\nInvalid ID value.\n";

             

              cout << "\nPlease enter ID number and amount purchased or '0' for quit: ";

              cin >> ID;

              cin >> soldAmount;

       }

       //print the final inventory values of the

       //four brands.

       cout<<"\nThe final inventory for Coca-Cola: "<< cocoInventory<<endl;

       cout<<"The final inventory for Pepsi: " <<pepsiInventory << endl;

       cout<<"The final inventory for Canada-Dry: " << dryInventory<<endl;

       cout<<"The final inventory for Hires: " <<      hiresInventory << endl;

       return 0;

}