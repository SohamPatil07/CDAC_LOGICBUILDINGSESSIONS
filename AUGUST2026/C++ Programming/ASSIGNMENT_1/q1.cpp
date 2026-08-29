#include <iostream>
using namespace std;

int main() {

	double temp;
	int StatusCode;
	cout << "Enter Temp in DgreeC" ;
	cin >>  temp ;

	if(temp<0){
		StatusCode = -1;
	}
	else if(temp>0 && temp<=29){
		StatusCode = 0;
	}
	else if(temp>=30 && temp<=44){
			StatusCode = 1;
		}
	else if(temp>=45 && temp<=59){
			StatusCode = 2;
		}
	else{
		StatusCode = 3;
	}





	switch(StatusCode){
	case -1:
		cout << "Sensor_Error" <<endl;
		cout << "Sensor fault-check wiring" <<endl;
	break;

	case 0:
			cout << "Normal" <<endl;
			cout << "NO action required" <<endl;
	break;

	case 1:
			cout << "Warning" <<endl;
			cout << "Alert sent to supervisor" <<endl;
	break;

	case 2:
			cout << "Critical" <<endl;
			cout << "Cooling system triggered" <<endl;
	break;

	case 3:
			cout << "Shutdown" <<endl;
			cout << "emergency shutdown initiated" <<endl;
	break;

	default :
		cout << "Invalid Status Code";
	}

	double F = temp ;
	F = (temp * 9 / 5 ) + 32 ;


	cout << "Reading : " << ((temp >= 25) ? "Above Average" : "Below Average") << endl;

	cout << "Temprature : " << F;


	return 0 ;


}