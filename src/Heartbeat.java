
public class Heartbeat {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int n = 0;
		while (n < 200) {
		try{

			Thread.sleep(1000);
			System.out.println(n+" seconds have passed");
			n++;
			
		}
		catch(InterruptedException e){
			e.fillInStackTrace();
		}
		}
	}

}
