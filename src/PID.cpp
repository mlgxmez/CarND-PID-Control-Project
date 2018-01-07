#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_0, double Ki_0, double Kd_0) {
	// Set initial values for the parameters
	Kp = Kp_0;
	Ki = Ki_0;
	Kd = Kd_0;

	// Set errors for the paramters
	p_error = 0.0;
	i_error = 0.0;
	d_error = 0.0;
}

void PID::UpdateError(double cte) {
	d_error = cte - p_error;
	p_error = cte;
	i_error += cte;


}

double PID::TotalError() {
	return - Kp*p_error - Ki*i_error - Kd*d_error;
}

