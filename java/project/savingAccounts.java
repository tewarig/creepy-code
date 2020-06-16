public class SavingsAccount {
  
  int balance;
  
  public SavingsAccount(int initialBalance){
    balance = initialBalance;
  }
  // check Balance function 
  public void checkBalance()
  {
     System.out.println("Hello!");
    System.out.println("Your balance is "+ balance);
  }
  // deposit function
  public void deposit(int amountToDeposit)
  {
   int addThis = amountToDeposit + balance ;
   balance = addThis;
  }
  //withdraw function
  public void withdraw(int amountToWithdraw)
  {
    int subthis = balance - amountToWithdraw;
    balance = subthis;
    return amountToWithdraw;
  }
  
  public static void main(String[] args){
    SavingsAccount savings = new SavingsAccount(2000);
    
    savings.checkBalance();
        savings.deposit();
    savings.withdraw();

    
  
  }       
}
