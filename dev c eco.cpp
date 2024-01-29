//REG NUMBER: C19137614S
//NAME: MUNASHE WALTER JOJO
//MODULE: COMPUTER ENGINEERING PROJECT 1
//PROGRAM: BEIE
//LEVEL: 2.2

#include<iostream>
using namespace std;

//global declaration of all the variables
int pin, option, p_number, amt_to_send, confirm, c_out, agent_code, payment, biller_code, acc_number, merchant_code, ref_payment, option2, mobile_number2, m1, m2, option3, opt, option4, option5;
double amt_to_bank, amt_to_go_bank, amt_to_cashout, amt_for_bill, amt_for_merchant, amt_for_self, amt_for_other, any_key1, amt_zesa; 
char any_key;
double acc_bal = 2000, amt_in_bank = 5000;
long int mobile_number = 784600988, meter_no;

//the main function
int main()
{
    cout << "*******************************************************\n";
    cout << "* Welcome to Ecocash Menu, Enter your pin to continue *" << endl;
    cout << "*******************************************************\n";
    cout<< "Pin: "; cin >> pin;

    if(pin != 1234) //the login pin is 1234 by default



    {
        cout << "\n\nYou have entered a wrong pin code :(\n\n";
        cout << "Please press any key followed by enter and try again!";
        cin >> any_key;
        return any_key;
    }
    


    else if (pin == 1234)
    {
        cout << "\nTell us what you want to do by entering the number of the required function:\n\n";

        cout << "\n1. Send money \n2. Cash out\n3. Make payment\n4. Airtime and bundles\n5. Wallet services\n6. Banking services\n\n";
    
    cin >> option;

    if(option == 1) //the send money option
    {
        cout << "Enter subscribers number:";
        cin >>p_number;
        cout << "Enter the amount: ";
        cin>>amt_to_send;

        cout << "\n\nSending RTGS$ " <<amt_to_send<< " to " <<p_number<< ". Press 1 to confirm or 2 to cancel: ";
        cin >>confirm;
        if(confirm == 1 && amt_to_send<=acc_bal)
        {cout<< "\n\nYou have successfully sent RTGS$ " <<amt_to_send<< " to " <<p_number<< ", your new account balance is RTGS$ " <<acc_bal-amt_to_send<< ".\n\n";}
        else if(confirm == 2 && amt_to_send <= acc_bal){cout<<"you have canceled the transaction,Good day!"; }
        else if(confirm == 1 && amt_to_send>acc_bal){cout<<"you have insufficient balance to proceed with this transaction.\n";}
        else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
    }

else if(option == 2) //the cashout option
{
 cout << "1. From agent\n2. From ATM\n\n";
 cin >> c_out;
 if(c_out == 1)
{
 cout << "Enter receiving channel`s Agent code: \n";
 cin >> agent_code;
 cout << "Enter the amount you wish to cashout: ";
 cin>>amt_to_cashout;

cout << "\n\nCashout RTGS$ " <<amt_to_cashout<< " from Agent: " <<agent_code<< ". Press 1 to confirm or 2 to cancel: ";
        cin >>confirm;
        if(confirm == 1 && amt_to_cashout<=acc_bal)
        {cout<< "\n\nYou have succesfully cashed out RTGS$ " <<amt_to_cashout<< " from " <<agent_code<< ", your new account balance is RTGS$ " <<acc_bal-amt_to_cashout<< ".\n\n";}
        else if(confirm == 2 && amt_to_cashout <= acc_bal){cout<<"You have cancelled the transaction, Good day!";}
        else if(confirm == 1 && amt_to_cashout>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
        else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
}
else if(c_out == 2)
{

 cout << "Enter receiving channel`s Agent code: \n";
 cin >> agent_code;
 cout << "Enter the amount you wish to cashout: ";
 cin >> amt_to_cashout;

cout << "\n\nCashout RTGS$ " <<amt_to_cashout<< " from ATM: " <<agent_code<< " .Press 1 to confirm or 2 to cancel: ";
        cin >>confirm;
        if(confirm == 1 && amt_to_cashout<=acc_bal)
        {cout << "\n\nYou have successfully cashed out RTGS$ " <<amt_to_cashout<< " from " <<agent_code<< ", your new account balance is RTGS$ " <<acc_bal-amt_to_cashout<< ".\n\n";}
        else if(confirm == 2 && amt_to_cashout <= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && amt_to_cashout>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
}

}

else if(option == 3) //the make payment option
{

 cout << "1. Pay bill\n2. Pay merchant\n3. Pay school fees\n4. Transfer to church\n5. Buy ZESA\n\n";
 cin >> payment;

 if(payment == 1)
 {
     cout << "Enter the Biller code: ";
     cin >> biller_code;
     cout << "Enter the amount: ";
     cin >> amt_for_bill;
     cout << "Enter the Account Number: ";
     cin >> acc_number;

     cout << "\n\nPayment of RTGS$ " <<amt_for_bill<< " from " <<biller_code<< ", Account number: " <<acc_number<< ". Press 1 to confirm or 2 to cancel: ";
        cin >>confirm;
        if(confirm == 1 && amt_for_bill<=acc_bal)
        {cout<< "\n\nYou have successfully paid RTGS$ " <<amt_for_bill<< " to " <<biller_code<< ", Your new account balance is RTGS$ " <<acc_bal-amt_for_bill<< ".\n\n";}
        else if(confirm == 2 && amt_for_bill<=acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && amt_for_bill>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}

 }
 else if (payment == 2)
 {

     cout << "Enter the Merchant code: \n";
     cin >> merchant_code;
     cout << "Enter the amount: \n";
     cin >> amt_for_merchant;


     cout << "\n\nPayment of RTGS$ " <<amt_for_merchant<< " to Merchant: " <<merchant_code<< ". Press 1 to confirm or 2 to cancel: ";
        cin >>confirm;
        if(confirm == 1 && amt_for_merchant<=acc_bal)
        {cout<< "\n\nYou have successfully paid RTGS$ " <<amt_for_merchant<< " to " <<merchant_code<< ", Your new account balance is RTGS$ " <<acc_bal-amt_for_merchant<< ".\n\n";}
        else if(confirm == 2 && amt_for_merchant <= acc_bal){cout<<"You have canceled the transaction,Good day!";}
        else if(confirm == 1 && amt_for_merchant>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}

 }
else if(payment == 3)
{
    cout << "Enter the Merchant code: \n";
    cin >> merchant_code;
    cout << "Enter the amount: \n";
    cin >> amt_for_merchant;
    cout << "Enter the reference number: \n";
    cin >> ref_payment;

     cout << "\n\nPayment of RTGS$ " <<amt_for_merchant<< " to School Account: " <<merchant_code<< ", with reference: " <<ref_payment<< ".  Press 1 to confirm or 2 to cancel: ";
        cin >>confirm;
        if(confirm == 1 && amt_for_merchant<=acc_bal)
        {cout<< "\n\nYou have successfully paid RTGS$ " <<amt_for_merchant<< " to School account: " <<merchant_code<< ", with reference number: " <<ref_payment<< ", Your new account balance is RTGS$ " <<acc_bal-amt_for_merchant<< ".\n\n";}
        else if(confirm == 2 && amt_for_merchant <= acc_bal){cout<<"you have canceled the transaction,Good day!";}
        else if(confirm == 1 && amt_for_merchant>acc_bal){cout<<"you have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}

}
else if(payment == 4)
{
    cout << "Enter the Merchant Billing code: \n";
    cin >> merchant_code;
    cout << "Enter the amount: \n";
    cin >> amt_for_merchant;
    cout << "Enter the reference number: \n";
    cin >> ref_payment;

     cout << "\n\nPayment of RTGS$ " <<amt_for_merchant<< " to Church Account: " <<merchant_code<< ", with reference: " <<ref_payment<< ".  Press 1 to confirm or 2 to cancel: ";
        cin >>confirm;
        if(confirm == 1 && amt_for_merchant<=acc_bal)
        {cout<< "\n\nYou have successfully paid RTGS$ " <<amt_for_merchant<< " to Church account: " <<merchant_code<< ", Your new account balance is RTGS$ " <<acc_bal-amt_for_merchant<< ".\n\n";}
        else if(confirm == 2 && amt_for_merchant <= acc_bal){cout<<"You have canceled the transaction,Good day!";}
        else if(confirm == 1 && amt_for_merchant >acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}

}

else if(payment == 5)
{
	cout<<"Enter the amount: \n";
	cin>> amt_zesa;
	cout << "Enter the meter number: \n";
	cin >> meter_no;
	
	cout<< "\n\nBuying zesa tokens for RTGS$ " <<amt_zesa<< " for meter number: " <<meter_no<< ". Press 1 to confirm or 2 to cancel";
	cin >>confirm;
	 
        if(confirm == 1 && amt_zesa<=acc_bal)
        {cout<< "\n\nYou have successfully bought zesa tokens for RTGS$ " <<amt_zesa<< " for meter number: " <<meter_no<< ", Your new account balance is RTGS$ " <<acc_bal-amt_zesa<< ".\n\n";}
        else if(confirm == 2 && amt_zesa <= acc_bal){cout<<"You have canceled the transaction,Good day!";}
        else if(confirm == 1 && amt_zesa>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
         else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}	
}

}

if(option == 4) //the airtime and bundles main option 
{
 cout << "1. Buy Airtime\n2. Buy Bundles\n";
 cin >> option;
 if(option == 1) //the airtime option
    {
    cout << "1. My mobile\n2. Other mobile\n";
     cin >> option3;
     
     if(option3 == 1)
        {
        cout << "Enter the amount: ";
        cin >> amt_for_self;

        cout<< "Buying Airtime for " <<mobile_number<< ", Amount RTGS$" <<amt_for_self<< ". Enter 1 to confirm or 2 to cancel. ";
        cin >> confirm;

        if(confirm == 1 && amt_for_self<=acc_bal)
        {cout<< "\n\nYou have successfully bought RTGS$" <<amt_for_self<< " worth of airtime for " <<mobile_number<< ", Your new account balance is RTGS$ " <<acc_bal-amt_for_self<< ".\n\n";}
        else if(confirm == 2 && amt_for_self<= acc_bal){cout<<"You have canceled the transaction,Good day!";}
        else if(confirm == 1 && amt_for_self>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
        }
    else if(option3 == 2)
        {
        cout << "Enter the mobile number: ";
        cin >> mobile_number2;
        cout << "Enter the amount: ";
        cin >> amt_for_other;

        cout<< "Buying Airtime for " <<mobile_number2<< ", Amount RTGS$" <<amt_for_other<< ". Enter 1 to confirm or 2 to cancel. ";
        cin >> confirm;

         if(confirm == 1 && amt_for_other<=acc_bal)
        {cout<< "\n\nYou have successfully bought RTGS$ " <<amt_for_other<< " worth of airtime for " <<mobile_number2<< ", Your new account balance is RTGS$ " <<acc_bal-amt_for_other<< ".\n\n";}
        else if(confirm == 2 && amt_for_other<= acc_bal){cout<<"You have canceled the transaction,Good day!";}
        else if(confirm == 1 && amt_for_other>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
        }
}
 else if (option == 2) //the buy bundles option
    {
	 cout<< "1. Facebook\n2. WhatsApp\n3. Data\n4. SMS\n5. Bundles of Joy\n\n";
      cin>> option2;
      
    if(option2 == 1)
        {
        cout << "1. My mobile\n2. Other mobile\n";
        cin >> m1;
        if(m1 == 1)
        {
        	cout << "1. $17 - (20mb) - daily\n2. $36 - (45mb) - weekly\n3. $100 - (300mb) monthly\n\n";
        	cin >> option;
        	if(option == 1) 
			{
				cout << "Buying $17 - (20mb) daily bundles for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel.";
	            cin >> confirm;
			
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $17 - (20mb) facebook daily bundles for " <<mobile_number<< ", Your new account balance is RTGS$ " <<acc_bal-17<< ".\n\n";}
        else if(confirm == 2 && 17<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 17>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
		   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}		
			    
	       }
		
		else if (option == 2)	
		{
			{
				cout << "Buying $36 - (45mb) - weekly data bundles for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $36 - (45mb) facebook weekly bundles for " <<mobile_number<< ". Your new account balance is RTGS$ " <<acc_bal-36<< ".\n\n";}
        else if(confirm == 2 && 36<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 36>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
		   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}		
			}
			
		}
		else if (option == 3)
		
		{
			
				cout << "Buying $100 - (300mb) - monthly data bundles for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $100 - (300mb) facebook monthly bundles for " <<mobile_number<< ". Your new account balance is RTGS$ " <<acc_bal-100<< ".\n\n";}
        else if(confirm == 2 && 100<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 100>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
		}
		

        }
        else if (m1 == 2)
        {
        	cout<< "Enter the mobile number: ";
        	cin>> mobile_number2;
        	cout << "1. $17 - (20mb) - daily\n2. $36 - (45mb) - weekly\n3. $100 - (300mb) montly ";
        	cin >> option;
        	if(option == 1) 
			{
				cout << "Buying $17 - (20mb) daily bundles for " <<mobile_number2<< "Enter 1 to confirm or 2 to cancel.";
	            cin >> confirm;
				{
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $17 - (20mb) facebook daily bundles for " <<mobile_number2<< ". Your new account balance is RTGS$ " <<acc_bal-17<< ".\n\n";}
        else if(confirm == 2 && 17<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 17>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}	
		   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}	
			}
	       }
		
		else if (option2 == 2)	

			{
				cout << "Buying $36 - (45mb) - weekly data bundles for " <<mobile_number2<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $36 - (45mb) facebook weekly bundles for " <<mobile_number2<< ". Your new account balance is RTGS$ " <<acc_bal-36<< ".\n\n";}
        else if(confirm == 2 && 36<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 36>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}	
		   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}	
			}
			
		}
		else if (option == 3)
		
		{
			
				cout << "Buying $100 - (300mb) - monthly data bundles for " <<mobile_number2<< "Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $100 - (300mb) facebook monthly bundles for " <<mobile_number2<< ". Your new account balance is RTGS$ " <<acc_bal-100<< ".\n\n";}
        else if(confirm == 2 && 100<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 100>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
		   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
		}	
        	
		}
		
 

else if (option2 == 2)
{
	
        cout << "1. My mobile\n2. Other mobile\n";
        cin >> m1;
        if(m1 == 1)
        {
        	cout << "1. $15 - (20mb) - daily\n2. $35 - (45mb) - weekly\n3. $100 - (300mb) montly ";
        	cin >> option;
        	if(option == 1) 
			{
				cout << "Buying $15 - (20mb) daily bundles for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel.";
				cin >> confirm;
		
				if(confirm == 1)
				{	
        cout << "\n\nYou have successfully bought $15 - (20mb) Whatsapp daily bundles for "<<mobile_number<< ". Your new account balance is RTGS$ " <<acc_bal-15<< ".\n\n";}
        else if(confirm == 2 && 15<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 15>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}	
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
	           	
		    }
		
		else if (option == 2)	
		{
		
				cout << "Buying $35 - (45mb) - Whatsapp weekly data bundles for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $35 - (45mb) Whatsapp weekly bundles for " <<mobile_number<< ". Your new account balance is RTGS$ " <<acc_bal-35<< ".\n\n";}
        else if(confirm == 2 && 35<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 35>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}		
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
			
		}
		else if (option == 3)
		
		{
			
				cout << "Buying $100 - (300mb) - monthly data bundles for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $100 - (300mb) Whatsapp monthly bundles for " <<mobile_number<< ". Your new account balance is RTGS$ " <<acc_bal-100<< ".\n\n";}
        else if(confirm == 2 && 100<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 100>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
		}
		
        }
        else if (m1 == 2)
        {
        	cout<< "Enter the mobile number: ";
        	cin>> mobile_number2;
        	cout << "1. $15 - (20mb) - daily\n2. $35 - (45mb) - weekly\n3. $100 - (300mb) montly ";
        	cin >> option;
        	if(option == 1) 
			{
				cout << "Buying $15 - (20mb) daily bundles for " <<mobile_number2<< "Enter 1 to confirm or 2 to cancel.";
	            cin >> confirm;
				
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $15 - (20mb) Whatsapp daily bundles for " <<mobile_number2<< ". Your new account balance is RTGS$" <<acc_bal-15<< ".\n\n";}
        else if(confirm == 2 && 15<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 15>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}		
			   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
	       }
		
		else if (option2 == 2)	

			{
				cout << "Buying $35 - (45mb) - weekly data bundles for " <<mobile_number2<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $35 - (45mb) Whatsapp weekly bundles for " <<mobile_number2<< ". Your new account balance is RTGS$" <<acc_bal-35<< ".\n\n";}
        else if(confirm == 2 && 35<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 35>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}	
		   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}	
	
		}
		else if (option == 3)
		
		{
			
			    	cout << "Buying $100 - (300mb) - monthly data bundles for " <<mobile_number2<< "Enter 1 to confirm or 2 to cancel. ";
			    	cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $100 - (300mb) Whatsapp monthly bundles for " <<mobile_number2<< ". Your new account balance is RTGS$ " <<acc_bal-100<< ".\n\n";}
        else if(confirm == 2 && 100<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 100>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
	
        }
}
}

else if(option2 == 3)
{
  cout << "1. My mobile\n2. Other mobile\n";
        cin >> m1;
    
		
        if(m1 == 1)
        {
        	cout << "1. $10 - (50mb) - daily\n2. $50 - (350mb) - weekly\n3. $150 - (900mb) monthly ";
        	cin >> option;
        	if(option == 1) 
			{
				cout << "Buying $10 - (50mb) daily bundles for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel.";
				cin >> confirm;
		
				if(confirm == 1)
				{	
        cout << "\n\nYou have successfully bought $10 - (50mb) Data daily bundle for "<<mobile_number<< ". Your new account balance is RTGS$ " <<acc_bal-10<< ".\n\n";}
        else if(confirm == 2 && 10<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 10>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}	
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
	           	
		    }
	
		else if (option == 2)	
		{
			
				cout << "Buying $50 - (350mb) - weekly data bundles for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $50 - (350mb) Data weekly bundle for " <<mobile_number<< ". Your new account balance is RTGS$ " <<acc_bal-50<< ".\n\n";}
        else if(confirm == 2 && 50<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 50>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
		   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}			
		}
		else if (option == 3)
		
		{
			
				cout << "Buying $150 - (900mb) - monthly data bundle for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $150 - (900mb) Data monthly bundle for " <<mobile_number<< ". Your new account balance is RTGS$ " <<acc_bal-150<< ".\n\n";}
        else if(confirm == 2 && 150<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 150>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
           
		}		
}
        else if (m1 == 2)
        {
        	cout<< "Enter the mobile number: ";
        	cin>> mobile_number2;
        	cout << "1. $10 - (50mb) - daily\n2. $50 - (350mb) - weekly\n3. $150 - (900mb) monthly ";
        	cin >> option;
        	if(option == 1) 
			{
				cout << "Buying $10 - (50mb) daily data bundles for " <<mobile_number2<< ". Enter 1 to confirm or 2 to cancel.";
	            cin >> confirm;
				
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $10 - (50mb) Data daily bundles for " <<mobile_number2<< ". Your new account balance is RTGS$" <<acc_bal-10<< ".\n\n";}
        else if(confirm == 2 && 10<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 10>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}	
		else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}	
		
	       }
		
		else if (option == 2)	

			{
				cout << "Buying $50 - (350mb) - weekly data bundles for " <<mobile_number2<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $50 - (45mb) Data weekly bundle for " <<mobile_number2<< ". Your new account balance is RTGS$" <<acc_bal-50<< ".\n\n";}
        else if(confirm == 2 && 50<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 50>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}	
		   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}	
			}
			
		
		else if (option == 3)
		
		{
			
			    	cout << "Buying $150 - (900mb) - monthly data bundle for " <<mobile_number2<< ". Enter 1 to confirm or 2 to cancel. ";
			    	cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $150 - (900mb) Data monthly bundle for " <<mobile_number2<< ". Your new account balance is RTGS$ " <<acc_bal-150<< ".\n\n";}
        else if(confirm == 2 && 150<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 150>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
		}
       	
}
}

else if (option2 == 4)
{
 
  cout << "1. My mobile\n2. Other mobile\n";
        cin >> m1;
    
		
        if(m1 == 1)
        {
        	cout << "1. $10 - (50 SMS) - daily\n2. $50 - (300 SMS) - weekly\n3. $100 - (650 SMS) monthly ";
        	cin >> option;
        	if(option == 1) 
			{
				cout << "Buying $10 - (50 SMS) daily bundles for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel.";
				cin >> confirm;
		
				if(confirm == 1)
				{	
        cout << "\n\nYou have successfully bought $10 - (50 SMS) daily bundle for "<<mobile_number<< ". Your new account balance is RTGS$ " <<acc_bal-10<< ".\n\n";}
        else if(confirm == 2 && 10<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 10>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}	
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
	           	
		    }
	
		else if (option == 2)	
		{
			
				cout << "Buying $50 - (300 SMS) - weekly bundles for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $50 - (300 SMS) weekly bundle for " <<mobile_number<< ". Your new account balance is RTGS$ " <<acc_bal-50<< ".\n\n";}
        else if(confirm == 2 && 50<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 50>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}	
		   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}	
				
		}
		else if (option == 3)
		
		{
			
				cout << "Buying $100 - (650 SMS) - monthly bundle for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $100 - (650 SMS) monthly bundles for " <<mobile_number<< ". Your new account balance is RTGS$ " <<acc_bal-100<< ".\n\n";}
        else if(confirm == 2 && 100<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 100>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
		}
		
    
} 
        else if (m1 == 2)
        {
        	cout<< "Enter the mobile number: ";
        	cin>> mobile_number2;
        	cout << "1. $10 - (50 SMS) - daily\n2. $50 - (300 SMS) - weekly\n3. $150 - (650 SMS) monthly ";
        	cin >> option;
        	
        	if(option == 1) 
			{
				cout << "Buying $10 - (50 SMS) daily bundles for " <<mobile_number2<< "Enter 1 to confirm or 2 to cancel.";
	            cin >> confirm;
				
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $10 - (50 SMS) daily bundles for " <<mobile_number2<< ". Your new account balance is RTGS$" <<acc_bal-10<< ".\n\n";}
        else if(confirm == 2 && 10<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 10>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
		   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}		
			
	       }
		
		else if (option == 2)	

			{
				cout << "Buying $50 - (300 SMS) - weekly  bundles for " <<mobile_number2<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $50 - (300 SMS) weekly bundle for " <<mobile_number2<< ". Your new account balance is RTGS$" <<acc_bal-50<< ".\n\n";}
        else if(confirm == 2 && 50<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 50>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
		   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}		
			}
			
		
		else if (option == 3)
		
		{
			
			    	cout << "Buying $100 - (650 SMS) - monthly bundle for " <<mobile_number2<< "Enter 1 to confirm or 2 to cancel. ";
			    	cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $100 - (650 SMS) monthly bundle for " <<mobile_number2<< ". Your new account balance is RTGS$ " <<acc_bal-100<< ".\n\n";}
        else if(confirm == 2 && 100<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 100>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
	
        }
}
}

else if (option2 == 5)
{
 
  cout << "1. My mobile\n2. Other mobile\n";
        cin >> m1;
    
		
        if(m1 == 1)
        {
        	cout << "1. $10 - (5 minutes) - daily\n2. $50 - (60 minutes) - weekly\n3. $100 - (300 minutes) monthly ";
        	cin >> option;
        	if(option == 1) 
			{
				cout << "Buying $10 - (5 minutes) daily bundles for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel.";
				cin >> confirm;
		
				if(confirm == 1)
				{	
        cout << "\n\nYou have successfully bought $10 - (5 minutes) daily bundle of joy for "<<mobile_number<< ". Your new account balance is RTGS$ " <<acc_bal-10<< ".\n\n";}
        else if(confirm == 2 && 10<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 10>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}	
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
	           	
		    }
	
		else if (option == 2)	
		{
			
				cout << "Buying $50 - (60 minutes) - weekly bundles for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $50 - (60 minutes) weekly bundle of joy for " <<mobile_number<< ". Your new account balance is RTGS$ " <<acc_bal-50<< ".\n\n";}
        else if(confirm == 2 && 50<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 50>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}		
			   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
			
		}
		else if (option == 3)
		
		{
			
				cout << "Buying $100 - (300 minutes) - monthly bundle for " <<mobile_number<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $100 - (300 minutes) monthly bundle of joy for " <<mobile_number<< ". Your new account balance is RTGS$ " <<acc_bal-100<< ".\n\n";}
        else if(confirm == 2 && 100<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 100>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
		}
	}
        else if (m1 == 2)
        {
        	
        	cout<< "Enter the mobile number: ";
        	cin>> mobile_number2;
        	cout << "1. $10 - (5 minutes) - daily\n2. $50 - (60 minutes) - weekly\n3. $100 - (300 minutes) monthly ";
        	cin >> option4;
        	
        	if(option4 == 1) 
			{
				cout << "Buying $10 - (5 minutes) daily bundles for " <<mobile_number2<< ". Enter 1 to confirm or 2 to cancel.";
	            cin >> confirm;
				
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $10 - (5 minutes) daily bundle of joy for " <<mobile_number2<< ". Your new account balance is RTGS$" <<acc_bal-10<< ".\n\n";}
        else if(confirm == 2 && 10<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 10>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}	
		   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}	
			
	       }
		
		else if (option4 == 2)	

			{
				cout << "Buying $50 - (60 minutes) - weekly  bundles for " <<mobile_number2<< ". Enter 1 to confirm or 2 to cancel. ";
				cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $50 - (60 minutes) weekly bundle of joy for " <<mobile_number2<< ". Your new account balance is RTGS$" <<acc_bal-50<< ".\n\n";}
        else if(confirm == 2 && 50<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 50>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}	
		   else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}	
			}
			
		
		else if (option4 == 3)
		
		{
			
			    	cout << "Buying $100 - (300 minutes) - monthly bundle for " <<mobile_number2<< ". Enter 1 to confirm or 2 to cancel. ";
			    	cin>> confirm;
					if(confirm == 1)
        {cout<< "\n\nYou have successfully bought $100 - (300 minutes) monthly bundle of joy for " <<mobile_number2<< ". Your new account balance is RTGS$ " <<acc_bal-100<< ".\n\n";}
        else if(confirm == 2 && 100<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && 100>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
	
        }	
}
}
}
}



else if(option == 5) //wallet services option
{
cout << "1. Account inquiry \n2. Bank balance inquiry\n\n";
cin>> option4;

if(option4 == 1)
{
	cout << "Your main account balance is RTGS$" <<acc_bal<<".";
	
}
else if(option4 == 2)
{
	cout << "Your bank balance is RTGS$" <<amt_in_bank<< ".";
}
   else if(option4  != 2 || option4 !=1 ) {cout<<"You have entered an invalid option, please try again!";}
}



else if(option == 6) //banking services option
{
cout << "1. Wallet to bank transfer \n2. Bank to wallet transfer\n\n";
cin>> option5;

if (option5 == 1)
{
	cout << "Enter the amount: ";
	cin>>amt_to_bank;
	
	cout << "\n\nTransfering RTGS$" <<amt_to_bank<< " from the main account to your Bank account. Press 1 to confirm or 2 to cancel.";
	cin >> opt;
	
	if  (opt == 1)
        {cout<< "\n\nYou have successfully transferred RTGS$" <<amt_to_bank<< " to your main Bank account. Your new account balance is RTGS$" <<acc_bal-amt_to_bank<< " and Your new bank balance is RTGS$"<<amt_to_bank+amt_in_bank;}
        else if(confirm == 2 && amt_to_bank<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && amt_to_bank>acc_bal){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}
}
else if(option5 == 2)
{
	
	cout << "Enter the amount: ";
	cin >> amt_to_go_bank;
	
	cout << "\n\nTransfering RTGS$" <<amt_to_go_bank<< " from your bank to your wallet. Press 1 to confirm or 2 to cancel. "; 
	cin >> opt;
	
if  (opt == 1)
        {cout<< "\n\nYou have successfully transferred RTGS$" <<amt_to_go_bank<< " from your main Bank account to your wallet. Your new bank balance is RTGS$" <<amt_in_bank-amt_to_go_bank<< " and Your new wallet balance is RTGS$" <<acc_bal+amt_to_go_bank;}
        else if(confirm == 2 && amt_to_go_bank<= acc_bal){cout<<"You have canceled the transaction, Good day!";}
        else if(confirm == 1 && amt_to_go_bank>amt_in_bank){cout<<"You have insufficient balance to proceed with this transaction.\n";}
           else if(confirm  != 2 || confirm !=1 ) {cout<<"You have entered an invalid option, please try again!";}

}

}
cout << "\n\nPress any key and enter to exit";
 cin >> any_key;

}

else {
      cout << "\n\nYou have entered an invalid option. Good day! Press any key and enter to exit\n\n";
      cin >> any_key;
	 }

cout <<"\n\n**********************************";
    return 0;


}


