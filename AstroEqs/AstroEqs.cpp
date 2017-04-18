/* ========================================================================================================
NOTES: 
  - When computing, the first compute always contains answer; however when compute additional times with no change, certain resulting values disappear (not from array just from result). This is due to the way if...else if statements work due to the one-way only conditions of the fucntion. 
  - Think about possible classifications (classes) of objects coming out of this program. It will make the program more efficient and reusable. Maybe class for star/planet classifications. Finish DSO.h!

======================================================================================================== */

#include <iostream>
#include <cmath> 
#include <string>
#include <windows.h>

using namespace std;
using std::cout;

//Global Array Declaration
double EqsArray[75]; //change array here
const double pi = 3.141592653589793;

void DisplayArray() {
/*	//for a_m to a
	if (EqsArray[33] != 0 && EqsArray[17] == 0) {
		double ws = EqsArray[33] / (1.496 * pow(10,11));
		double temp = ws;
		ws = EqsArray[17];
		EqsArray[17] = temp;
	}
	//for a to a_m
	if (EqsArray[33] == 0 && EqsArray[17] != 0) {
		double ws = EqsArray[17] * (1.496 * pow(10, 11));
		double temp = ws;
		ws = EqsArray[33];
		EqsArray[33] = temp;
	} */
	cout << "(0(K), 35(degrees C)) T_se (surface/effective (radiating) temperature = " << EqsArray[0] << " K = " << EqsArray[35] << " degrees C\n";
	cout << "(1) R (radius) = " << EqsArray[1] << " m = " << EqsArray[1] / (6.9599 * pow(10, 8)) << " solar radii\n";
	cout << "(2) nu (frequency) = " << EqsArray[2] << " Hz (s^-1)\n";
	cout << "(3) lambda ((observed) wavelength) = " << EqsArray[3] << " m = " << EqsArray[3] / (6.9599 * pow(10,8)) << " solar radii\n";
	cout << "(4(watts), 9(L_Sol)) L (L_Sol) (luminosity) = " << EqsArray[4] << " watts = " << EqsArray[9] << " solar luminosities\n";
	// cout << "(5) d_o (distance to light source) = " << EqsArray[5] << " m = " << EqsArray[5] / (6.9599 * pow(10, 8)) << " solar radii\n";
	cout << "(6) H_0 (Hubble constant) = " << EqsArray[6] << " (km/s)/Mpc\n";
	cout << "(5(m), 7(Mpc), 11(pc)) d_g (distance to galaxy (star/object)) = " << EqsArray[7] << " Mpc = " << EqsArray[11] << " pc = " << EqsArray[5]  << " m  = " << (EqsArray[7] * 3.086 * pow(10, 22)) / (9.461 * pow(10,15)) << " LY = " << (EqsArray[7] * 3.086 * pow(10, 22)) / (6.9599 * pow(10, 8)) << " solar radii\n";
	cout << "(8) M (absolute magnitude) = " << EqsArray[8] << "\n";
	cout << "(10) m (apparent magnitude) = " << EqsArray[10] << "\n";
	// cout << "(11) d_s (distance to the star) = " << EqsArray[11] << " pc = " << EqsArray[11] * 3.086 * pow(10, 16) << " m  = " << (EqsArray[11] * 3.086 * pow(10, 16)) / (9.461 * pow(10, 15)) << " LY = " << (EqsArray[11] * 3.086 * pow(10, 16)) / (6.9599 * pow(10, 8)) << " solar radii\n";
	cout << "(12) p'' (parallax (angle)) = " << EqsArray[12] << " arcsecs = " << EqsArray[12] / 60 << " degrees = " << (pi * EqsArray[12]) / 10800 << " rad\n";
	cout << "(13) lambda_0 (actual wavelength) = " << EqsArray[13] << " m = " << EqsArray[13] / (6.9599 * pow(10, 8)) << " solar radii\n";
	cout << "(14) mu (proper motion) = " << EqsArray[14] << " arcsecs/yr = " << EqsArray[14] / 60 << " degrees/yr = " << (pi * EqsArray[14]) / 10800 << " rad/yr\n";
	cout << "(15) v_t (tangential velocity) = " << EqsArray[15] << " km/s = " << (EqsArray[15] * pow(10,3)) / (6.9599 * pow(10, 8)) << " (solar radii)/s\n";
	cout << "(16) v_r (radial velocity) = " << EqsArray[16] << " km/s = " << (EqsArray[16] * pow(10, 3)) / (6.9599 * pow(10, 8)) << " (solar radii)/s\n";
	cout << "(17) a (semimajor axis) = " << EqsArray[17] << " AU = " << EqsArray[17] * (1.496 * pow(10,11)) << " m = " << EqsArray[17] / (1.0412 * pow(10,20)) << " solar radii\n";
	cout << "(18) M_t (total mass) = " << EqsArray[18] << " solar masses = " << EqsArray[18] * (1.989 * pow(10,30)) << " kg\n";
	cout << "(19) m_2 (mass of second object) = " << EqsArray[19] << " solar masses = " << EqsArray[19] * (1.989 * pow(10, 30)) << " kg\n";
	cout << "(20) M_c (center of mass) = " << EqsArray[20] << " solar masses = " << EqsArray[20] * (1.989 * pow(10, 30)) << " kg\n";
	cout << "(21) v_e (escape velocity) = " << EqsArray[21] << " m/s = " << EqsArray[13] / (6.9599 * pow(10, 8)) << " (solar radii)/s\n";
	cout << "(22) r (distance from center of gravity) = " << EqsArray[22] << " m = " << EqsArray[13] / (6.9599 * pow(10, 8)) << " solar radii\n";
	cout << "(23) z (redshift) = " << EqsArray[23] << "\n";
	cout << "(24) F (flux (intensity)) = " << EqsArray[24] << " watts/m^2 = " << EqsArray[24] / (3.827 * pow(10, 26)) << " (solar luminosities)/m^2 = " << EqsArray[24] * pow((6.9599 * pow(10, 8)), 2) << " watts/(solar radii)^2\n"; /* = " << (EqsArray[24] * pow((6.9599 * pow(10, 8)), 2)) / (3.827 * pow(10, 26)) << " (solar luminosities)/(solar radii)^2"; */
	cout << "(25) E (energy) = " << EqsArray[25] << " J\n";
	cout << "(26) lambda_max (wavelength of maximum emission) = " << EqsArray[26] << " m = " << EqsArray[26] / (6.9599 * pow(10, 8)) << " solar radii\n";
	cout << "(27) I (intensity/brightness) = " << EqsArray[27] << " watts/m^2 = " << EqsArray[27] / (3.827 * pow(10, 26)) << " (solar luminosities)/m^2 = " << EqsArray[27] * pow((6.9599 * pow(10, 8)), 2) << " watts/(solar radii)^2\n";
	cout << "(28) b (apparent brightness) = " << EqsArray[28] << " watts/m^2 = " << EqsArray[28] / (3.827 * pow(10, 26)) << " (solar luminosities)/m^2 = " << EqsArray[28] * pow((6.9599 * pow(10, 8)), 2) << " watts/(solar radii)^2\n";
	cout << "(29) v_g (recessional velocity of galaxy) = " << EqsArray[29] << " km/s = " << (EqsArray[29] * pow(10, 3)) / (6.9599 * pow(10, 8)) << " (solar radii)/s\n";
	cout << "(30) v_T (true space velocity) = " << EqsArray[30] << " km/s = " << (EqsArray[30] * pow(10, 3)) / (6.9599 * pow(10, 8)) << " (solar radii)/s\n";
	cout << "(31) P (sidereal period) = " << EqsArray[31] << " yrs\n";
	//cout << "(32) P_s (sidereal period) = " << EqsArray[32] << " secs\n";
	//cout << "(33) A_m (semimajor axis) = " << EqsArray[33] << " m = " << EqsArray[33] / (6.9599 * pow(10, 8)) << " solar radii\n";
	cout << "(32) b (semiminor axis) = " << EqsArray[32] << " AU = " << EqsArray[32] * (1.496 * pow(10, 11)) << " m = " << EqsArray[32] / (1.0412 * pow(10, 20)) << " solar radii\n";
	cout << "(33) e (eccentricity) = " << EqsArray[33] << "\n";
	cout << "(34) m_1 (mass of first object) = " << EqsArray[34] << " solar masses = " << EqsArray[34] * (1.989 * pow(10, 30)) << " kg\n";
	cout << "(36) deltaM_15 (change in magnitude over 15 days) = " << EqsArray[36] << "\n";
	cout << "(37) I_1 (first intensity) = " << EqsArray[37] << " watts\n";
	cout << "(38) I_2 (fsecond intensity) = " << EqsArray[38] << " watts\n";
	cout << "(39) d_1 (first distance) = " << EqsArray[39] << " pc\n";
	cout << "(40) d_2 (second distance) = " << EqsArray[40] << " pc\n";
}

double AnsConvert() {
	//for K to C
	if (EqsArray[0] != -1 && EqsArray[35] == -1) {
		double C = EqsArray[0] - 273.15;
		double tempC = C;
		C = EqsArray[35];
		EqsArray[35] = tempC;
	}
	//for C to K
	if (EqsArray[0] == -1 && EqsArray[35] != -1) {
		double K = EqsArray[35] + 273.15;
		double tempK = K;
		K = EqsArray[0];
		EqsArray[0] = tempK;
	}
	//for watts to L_Sol
	if (EqsArray[4] != 0 && EqsArray[9] == 0) {
		double ws = EqsArray[4] / (3.827 * pow(10, 26));
		double temp = ws;
		ws = EqsArray[9];
		EqsArray[9] = temp;
	}
	//for L_Sol to watts
	if (EqsArray[4] == 0 && EqsArray[9] != 0) {
		double sw = EqsArray[9] * 3.827 * pow(10, 26);
		double temp = sw;
		sw = EqsArray[4];
		EqsArray[4] = temp;
	}
	//for pc to Mpc
	if (EqsArray[7] == 0 && EqsArray[11] != 0) {
		double sw = EqsArray[11] / pow(10,6);
		double temp = sw;
		sw = EqsArray[7];
		EqsArray[7] = temp;
	}
	//for Mpc to pc
	if (EqsArray[7] != 0 && EqsArray[11] == 0) {
		double sw = EqsArray[7] * pow(10, 6);
		double temp = sw;
		sw = EqsArray[11];
		EqsArray[11] = temp;
	} 
	//for Mpc to m
	if (EqsArray[7] != 0 && EqsArray[5] == 0) {
		double sw = EqsArray[7] * 3.086 * pow(10, 22);
		double temp = sw;
		sw = EqsArray[5];
		EqsArray[5] = temp;
	}
	//for m to Mpc
	if (EqsArray[7] == 0 && EqsArray[5] != 0) {
		double sw = EqsArray[5] / (3.086 * pow(10, 22));
		double temp = sw;
		sw = EqsArray[7];
		EqsArray[7] = temp;
	}
	//for pc to m
	if (EqsArray[11] != 0 && EqsArray[5] == 0) {
		double sw = (EqsArray[11] * 3.086 * pow(10, 22)) / pow(10, 6);
		double temp = sw;
		sw = EqsArray[5];
		EqsArray[5] = temp;
	}
	//for pc to m
	if (EqsArray[11] == 0 && EqsArray[5] != 0) {
		double sw = EqsArray[11] * 3.086 * pow(10, 22) * pow(10, 6);
		double temp = sw;
		sw = EqsArray[11];
		EqsArray[11] = temp;
	}
	return 0;
}

void SetDefaultValues() {
	EqsArray[0] = -1;
	EqsArray[35] = -1;
	for (int i = 1; i<35; i++) //change array here
	EqsArray[i] = {};
	for (int i = 36; i<75; i++) //change array here
		EqsArray[i] = {};
	
}

void UpdateValues() {
	cout << "Enter index number to update value: ";
	int index;
	cin >> index;
	if (index>75 || index<0) { //change array here
		cout << "Invalid index entered-> Valid range(0-75) " << endl; //change array here
		UpdateValues(); // Recall The Function it self
	}
	else {
		cout << "Enter the new value for index array[ " << index << " ] = ";
		cin >> EqsArray[index];
		cout << "Array updated successfully. " << endl;
	}
}

double ConvertValues() {
	//si to si stuff
	char option2;
	int index2 = 0;
		do {
			cout << "Select the desired conversion: \n";
			//for -9, -6, -3, -2, 3, 6
			cout << "Enter 0 for nano- n (-9)\nEnter 1 for micro- mu (-6)\nEnter 2 for milli- m (-3)\nEnter 3 for centi- c (-2)\nEnter 4 for kilo- k (3)\nEnter 5 for mega- M (6)\nEnter 6 for (x)\nEnter 7 for AU -> m\nEnter 8 for (pc, LY, m) -> AU\nEnter 9 for kg -> M_Sol\nEnter option: ->  ";
			cin >> option2;
			if (option2 == '0') {
				//nano- n
				char option3;
				cout << "Enter index number to convert value: ";
				int index2;
				cin >> index2;
				if (index2 > 75 || index2 < 0) { //change array here
					cout << "Invalid index entered-> Valid range(0-75) " << endl; //change array here
					ConvertValues(); // Recall The Function it self
				}
				else {
					do {
						cout << "Select path: \n";
						cout << "Enter 0 for -> n\nEnter 1 for n ->\nEnter option: ";
						cin >> option3;
						if (option3 == '0') {
							// -> n
							double n = EqsArray[index2] / pow(10, -9);
							double temp = n;
							n = EqsArray[index2];
							EqsArray[index2] = temp;
							cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " n(units)\n";
						}
						if (option3 == '1') {
							//n ->
							double n = EqsArray[index2] * pow(10, -9);
							double temp = n;
							n = EqsArray[index2];
							EqsArray[index2] = temp;
							cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " (units)\n";
						}
					} while (option3 == '200');
				}
			}
			if (option2 == '1') {
				//micro- mu
				char option3;
				cout << "Enter index number to convert value: ";
				int index2;
				cin >> index2;
				if (index2 > 75 || index2 < 0) { //change array here
					cout << "Invalid index entered-> Valid range(0-75) " << endl; //change array here
					ConvertValues(); // Recall The Function it self
				}
				else {
					do {
						cout << "Select path: \n";
						cout << "Enter 0 for -> mu\nEnter 1 for mu ->\nEnter option: ";
						cin >> option3;
						if (option3 == '0') {
							// -> mu
							double n = EqsArray[index2] / pow(10, -6);
							double temp = n;
							n = EqsArray[index2];
							EqsArray[index2] = temp;
							cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " mu(units)\n";
						}
						if (option3 == '1') {
							//mu ->
							double n = EqsArray[index2] * pow(10, -6);
							double temp = n;
							n = EqsArray[index2];
							EqsArray[index2] = temp;
							cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " (units)\n";
						}
					} while (option3 == '200');
				}
			}
			if (option2 == '2') {
				//milli- m
				char option3;
				cout << "Enter index number to convert value: ";
				int index2;
				cin >> index2;
				if (index2 > 75 || index2 < 0) { //change array here
					cout << "Invalid index entered-> Valid range(0-75) " << endl; //change array here
					ConvertValues(); // Recall The Function it self
				}
				else {
					do {
						cout << "Select path: \n";
						cout << "Enter 0 for -> m\nEnter 1 for m ->\nEnter option: ";
						cin >> option3;
						if (option3 == '0') {
							// -> m
							double n = EqsArray[index2] / pow(10, -3);
							double temp = n;
							n = EqsArray[index2];
							EqsArray[index2] = temp;
							cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " m(units)\n";
						}
						if (option3 == '1') {
							//m ->
							double n = EqsArray[index2] * pow(10, -3);
							double temp = n;
							n = EqsArray[index2];
							EqsArray[index2] = temp;
							cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " (units)\n";
						}
					} while (option3 == '200');
				}
			}
			if (option2 == '3') {
				//centi- c
				char option3;
				cout << "Enter index number to convert value: ";
				int index2;
				cin >> index2;
				if (index2 > 75 || index2 < 0) { //change array here
					cout << "Invalid index entered-> Valid range(0-75) " << endl; //change array here
					ConvertValues(); // Recall The Function it self
				}
				else {
					do {
						cout << "Select path: \n";
						cout << "Enter 0 for -> c\nEnter 1 for c ->\nEnter option: ";
						cin >> option3;
						if (option3 == '0') {
							// -> c
							double n = EqsArray[index2] / pow(10, -2);
							double temp = n;
							n = EqsArray[index2];
							EqsArray[index2] = temp;
							cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " c(units)\n";
						}
						if (option3 == '1') {
							//c ->
							double n = EqsArray[index2] * pow(10, -2);
							double temp = n;
							n = EqsArray[index2];
							EqsArray[index2] = temp;
							cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " (units)\n";
						}
					} while (option3 == '200');
				}
			}
			if (option2 == '4') {
				//kilo- k
				char option3;
				cout << "Enter index number to convert value: ";
				int index2;
				cin >> index2;
				if (index2 > 75 || index2 < 0) { //change array here
					cout << "Invalid index entered-> Valid range(0-75) " << endl; //change array here
					ConvertValues(); // Recall The Function it self
				}
				else {
					do {
						cout << "Select path: \n";
						cout << "Enter 0 for -> k\nEnter 1 for k ->\nEnter option: ";
						cin >> option3;
						if (option3 == '0') {
							// -> k
							double n = EqsArray[index2] / pow(10, 3);
							double temp = n;
							n = EqsArray[index2];
							EqsArray[index2] = temp;
							cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " k(units)\n";
						}
						if (option3 == '1') {
							//k ->
							double n = EqsArray[index2] * pow(10, 3);
							double temp = n;
							n = EqsArray[index2];
							EqsArray[index2] = temp;
							cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " (units)\n";
						}
					} while (option3 == '200');
				}
			}
								if (option2 == '5') {
									//mega- M
									char option3;
									cout << "Enter index number to convert value: ";
									int index2;
									cin >> index2;
									if (index2>75 || index2<0) { //change array here
										cout << "Invalid index entered-> Valid range(0-75) " << endl; //change array here
										ConvertValues(); // Recall The Function it self
									}
									else {
										do {
											cout << "Select path: \n";
											cout << "Enter 0 for -> M\nEnter 1 for M ->\nEnter option: ";
											cin >> option3;
											if (option3 == '0') {
												// -> M
												double n = EqsArray[index2] / pow(10, 6);
												double temp = n;
												n = EqsArray[index2];
												EqsArray[index2] = temp;
												cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " M(units)\n";
											}
											if (option3 == '1') {
												//M ->
												double n = EqsArray[index2] * pow(10, 6);
												double temp = n;
												n = EqsArray[index2];
												EqsArray[index2] = temp;
												cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " (units)\n";
											}
										} while (option3 == '200');
									}
								}
								if (option2 == '6') {
									//x
									char option4;
									cout << "Enter index number to convert value: ";
									int index2;
									cin >> index2;
									if (index2 > 75 || index2 < 0) { //change array here
										cout << "Invalid index entered-> Valid range(0-75) " << endl; //change array here
										ConvertValues(); // Recall The Function it self
									}
									else {
										do {
											cout << "Select path: \n";
											cout << "Enter 0 for -x\nEnter 1 for +x\nEnter option: ";
											cin >> option4;
											if (option4 == '0') {
												cout << "Enter exponent number for power: ";
												int x;
												cin >> x;
												if (index2 > 75 || index2 < 0) { //change array here
													cout << "Invalid index entered-> Valid range(0-75) " << endl; //change array here
													ConvertValues(); // Recall The Function it self
												}
												else {
													double n = EqsArray[index2] / pow(10, x);
													double temp = n;
													n = EqsArray[index2];
													EqsArray[index2] = temp;
													cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " (x)(units)\n";
												}
											}
											if (option4 == '1') {
												cout << "Enter exponent number for power: ";
												int x;
												cin >> x;
												if (index2 > 75 || index2 < 0) { //change array here
													cout << "Invalid index entered-> Valid range(0-75) " << endl; //change array here
													ConvertValues(); // Recall The Function it self
												}
												else {
													double n = EqsArray[index2] * pow(10, x);
													double temp = n;
													n = EqsArray[index2];
													EqsArray[index2] = temp;
													cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " (units)\n";
												}
											}
										} while (option4 == '200');
									}
								}
								if (option2 == '7') {
									//AU -> m
									cout << "Enter AU value to convert: ";
									double value;
									cin >> value;
									cout << "Enter index number to associate with converted value: ";
									int index2;
									cin >> index2;
										double final = value * 1.496 * pow(10, 11);
										double temp = final;
										final = EqsArray[index2];
										EqsArray[index2] = temp;
										cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " m\n";
								}
								if (option2 == '8') {
									//(pc, LY, m) -> AU
									char option3;
									
									do {
										cout << "Select path: \n";
										cout << "Enter 0 for pc -> AU\nEnter 1 for LY -> AU\nEnter 2 for m -> AU\nEnter option: ";
										cin >> option3;
										if (option3 == '0') {
											cout << "Enter pc value to convert: ";
											double value;
											cin >> value;
											cout << "Enter index number to associate with converted value: ";
											int index2;
											cin >> index2;
											double final = value * 206265;
											double temp = final;
											final = EqsArray[index2];
											EqsArray[index2] = temp;
											cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " AU\n";
										}
										if (option3 == '1') {
											cout << "Enter LY value to convert: ";
											double value;
											cin >> value;
											cout << "Enter index number to associate with converted value: ";
											int index2;
											cin >> index2;
											double final = value * 63241.077;
											double temp = final;
											final = EqsArray[index2];
											EqsArray[index2] = temp;
											cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " AU\n";
										}
										if (option3 == '2') {
											cout << "Enter m value to convert: ";
											double value;
											cin >> value;
											cout << "Enter index number to associate with converted value: ";
											int index2;
											cin >> index2;
											double final = value / (1.496 * pow(10, 11));
											double temp = final;
											final = EqsArray[index2];
											EqsArray[index2] = temp;
											cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " AU\n";
										}
									} while (option3 == '200');
								}
								if (option2 == '9') {
									//kg -> M_Sol
									cout << "Enter kg value to convert: ";
									double value;
									cin >> value;
									cout << "Enter index number to associate with converted value: ";
									int index2;
									cin >> index2;
									double final = value / (1.989 * pow(10, 30 ));
									double temp = final;
									final = EqsArray[index2];
									EqsArray[index2] = temp;
									cout << "Value for index " << index2 << " updated to " << EqsArray[index2] << " solar masses\n";
								}
							} while (option2 == '200');

		cout << "Array updated successfully. " << endl; 
		return 0; 
}

double ComputeValues() {
	// flux for F
	if (EqsArray[0] != -1) {
		double flux = 5.67 * pow(10,-8) * pow(EqsArray[0],4);
		cout << "F (flux) = " << flux << " watts/m^2\n";
		double temp = flux;
		flux = EqsArray[24];
		EqsArray[24] = temp;
	}
	// flux for T
	else if (EqsArray[24] != 0) {
		double flux = sqrt(sqrt(EqsArray[24] / (5.67 * pow(10, -8))));
		cout << "T_se (surface / effective (radiating) temperature) = " << flux << " K\n";
	}
	else {

	}
	// stefan-boltzmann equation for L
	if (EqsArray[0] != -1 && EqsArray[1] != 0) {
		double stefbolz = 4 * pi * 5.67 * pow(10, -8) * pow(EqsArray[1], 2) * pow(EqsArray[0], 4);
		cout << "L (luminosity) = " << stefbolz << " watts\n";
		double temp = stefbolz;
		stefbolz = EqsArray[4];
		EqsArray[4] = temp;
	}
	// stefan-boltzmann equation for R
	else if (EqsArray[0] != -1 && EqsArray[4] != 0) {
		double R = sqrt(EqsArray[4] / (4 * pi * 5.67 * pow(10, -8) * pow(EqsArray[0], 4)));
		cout << "R (radius) = " << R << " m\n";
		double temp = R;
		R = EqsArray[1];
		EqsArray[1] = temp;
	} // stefan-boltzmann equation for T
	else if (EqsArray[1] != 0 && EqsArray[4] != 0) {
		double T = sqrt(sqrt(EqsArray[4] / (4 * pi * 5.67 * pow(10, -8) * pow(EqsArray[1], 2))));
		cout << "T_se (surface / effective (radiating) temperature) = " << T << " K\n";
		double temp = T;
		T = EqsArray[0];
		EqsArray[0] = temp;
	}
	else {

	}
	// plank's law for E
	if (EqsArray[2] != 0) {
		double energy = 6.63 * pow(10,-34) * EqsArray[2];
		cout << "E (energy) = " << energy << " J\n";
	}
	// plank's law for nu
	else if (EqsArray[25] != 0) {
		double freq = EqsArray[25] / (6.63 * pow(10, -34));
		cout << "nu (frequency) = " << freq << " Hz (s^-1)\n";
		double temp = freq;
		freq = EqsArray[2];
		EqsArray[2] = temp;
	}
	else {

	}
	// wavelength-frequency relationship for wavelength
	if (EqsArray[2] != 0) {
		double wavelength = (3 * pow(10, 8)) / EqsArray[2];
		cout << "lambda (wavelength) = " << wavelength << " m\n";
		double temp = wavelength;
		wavelength = EqsArray[3];
		EqsArray[3] = temp;
	}
	// wavelength-frequency relationship for frequency
	else if (EqsArray[3] != 0) {
		double frequency = (3 * pow(10, 8)) / EqsArray[3];
		cout << "nu (frequency) = " << frequency << " Hz (s^-1)\n";
		double temp = frequency;
		frequency = EqsArray[2];
		EqsArray[2] = temp;
	}
	else {

	}
	// wein's law for lambda max
	if (EqsArray[0] != -1 && EqsArray[0] != 0) {
		double wein = (2.898 * pow(10,-3)) / EqsArray[0];
		cout << "lambda_max (wavelength of maximum emission) = " << wein << " m\n";
		double temp = wein;
		wein = EqsArray[26];
		EqsArray[26] = temp;
	}
	// wein's law for T
	else if (EqsArray[26] != 0) {
		double lammax = (2.898 * pow(10, -3)) / EqsArray[26];
		cout << "T_se (surface / effective (radiating) temperature) = " << lammax << " K\n";
		double temp = lammax;
		lammax = EqsArray[0];
		EqsArray[0] = temp;
	}
	else {

	}
	//inverse square law for intensity
	if (EqsArray[4] != 0 && EqsArray[1] != 0) {
		double inverse = EqsArray[4] / (4 * pi * pow(EqsArray[1],2));
		cout << "I (intensity/brightness) = " << inverse << " watts/m^2\n";
	}
	//inverse square law for R
	else if (EqsArray[4] != 0 && EqsArray[27] != 0) {
		double invR = sqrt(EqsArray[4] / (4 * pi * EqsArray[27]));
		cout << "R (radius) = " << invR << " m\n";
		double temp = invR;
		invR = EqsArray[1];
		EqsArray[1] = temp;
	}
	//inverse square law for L
	else if (EqsArray[1] != 0 && EqsArray[27] != 0) {
		double invL = 4 * pi * EqsArray[27] * pow(EqsArray[1],2);
		cout << "L (luminosity) = " << invL << " watts\n";
		double temp = invL;
		invL = EqsArray[4];
		EqsArray[4] = temp;
	}
	else {

	}
	// apparent brightness for b
	if (EqsArray[4] != 0 && EqsArray[5] != 0) {
		double appbright = EqsArray[4] / (4 * pi * pow(EqsArray[5], 2));
		cout << "b (apparent brightness) = " << appbright << " watts/m^2\n";
		double temp = appbright;
		appbright = EqsArray[28];
		EqsArray[28] = temp;
	} // apparent brightness for d
	else if (EqsArray[4] != 0 && EqsArray[28] != 0) {
		double d = sqrt(EqsArray[4] / (4 * pi * EqsArray[28]));
		cout << "d_o (distance to object(light source) in meters) = " << d << " m\n";
		double temp = d;
		d = EqsArray[5];
		EqsArray[5] = temp;
	}
	//apparent brightness for L
	else if (EqsArray[5] != 0 && EqsArray[28] != 0) {
		double invL = 4 * pi * EqsArray[28] * pow(EqsArray[5], 2);
		cout << "L (luminosity) = " << invL << " watts\n";
		double temp = invL;
		invL = EqsArray[4];
		EqsArray[4] = temp;
	}
	else {

	}
	// hubble's law for v
	if (EqsArray[6] != 0 && EqsArray[7] != 0) {
		double hubble = EqsArray[6] * EqsArray[7];
		cout << "v_g (recessional velocity of galaxy) = " << hubble << " km/s\n";
		double temp = hubble;
		hubble = EqsArray[29];
		EqsArray[29] = temp;
	} 
	// hubble's law for d
	else if (EqsArray[6] != 0 && EqsArray[29] != 0) {
		double hubble = EqsArray[29] / EqsArray[6];
		cout << "d_g (distance to galaxy (star)) = " << hubble << " Mpc\n";
		double temp = hubble;
		hubble = EqsArray[7];
		EqsArray[7] = temp;
	}
	else {

	}
	// lum-abs mag for lum in sol lum
	if (EqsArray[8] != 0) {
		double sollum = pow(10,-0.4 * (EqsArray[8]-4.85));
		cout << "L_Sol (luminosity) = " << sollum << " solar luminosites\n";
		double temp = sollum;
		sollum = EqsArray[9];
		EqsArray[9] = temp;
	} 
	// lum-abs mag for abs mag
	else if (EqsArray[9] != 0) {
		double absmag = 4.85 - (2.5 * log10(EqsArray[9]));
		cout << "M (absolute magnitude) = " << absmag << "\n";
		double temp = absmag;
		absmag = EqsArray[8];
		EqsArray[8] = temp;
	}
	else {

	}
	// distance modulus for m
	if (EqsArray[8] != 0 && EqsArray[11] != 0) {
		double m = (5 * log10(EqsArray[11])-5) + EqsArray[8];
		cout << "m (apparent magnitude) = " << m << "\n";
		double temp = m;
		m = EqsArray[10];
		EqsArray[10] = temp;
	}
	// distance modulus for M
	else if (EqsArray[10] != 0 && EqsArray[11] != 0) {
		double M = EqsArray[10] - (5 * log10(EqsArray[11]) - 5);
		cout << "M (absolute magnitude) = " << M << "\n";
		double temp = M;
		M = EqsArray[8];
		EqsArray[8] = temp;
	} 
	// distance modulus for d
	else if (EqsArray[8] != 0 && EqsArray[10] != 0) {
		double d = pow(10,(EqsArray[10] - EqsArray[8] + 5) / 5);
		cout << "d_g (distance to galaxy (star)) = " << d << " parsecs\n";
		double temp = d;
		d = EqsArray[11];
		EqsArray[11] = temp;
	}
	else {

	} 

	//interesting interaction between the immediate above and below (parseccontroversy)

	// parallax for distance to star
	if (EqsArray[12] != 0) {
		double dhello = 1 / EqsArray[12];
		cout << "d_g (distance to galaxy (star)) = " << dhello << " parsecs\n";
		double temp = dhello;
		dhello = EqsArray[11];
		EqsArray[11] = temp;
	}
	// parallax for parallax angle
	else if (EqsArray[11] != 0) {
		double p = 1 / EqsArray[11];
		cout << "p'' (parallax (angle) of star) = " << p << " arcsecs\n";
		double temp = p;
		p = EqsArray[12];
		EqsArray[12] = temp;
	}
	else {

	}
	// recessional velocity (same as radial only if viewed from earth)
	if (EqsArray[23] != 0) {
		double radv = (3 * pow(10,5)) * EqsArray[23];
		cout << "v_R (radial velocity (same as recessional if viewed from Earth)) = " << radv << " km/s\n";
		double temp = radv;
		radv = EqsArray[29];
		EqsArray[29] = temp;
	} 
	// recessional velocity for observed
	else if (EqsArray[13] != 0 && EqsArray[16] != 0) {
		double obswav = (-3 * pow(10, 8) * EqsArray[13]) / (EqsArray[16] - (3 * pow(10, 8)));
		cout << "lambda (observed wavelength) = " << obswav << " m\n";
		double temp = obswav;
		obswav = EqsArray[3];
		EqsArray[3] = temp;
	}
	// recessional velocity for actual
	else if (EqsArray[3] != 0 && EqsArray[16] != 0) {
		double actwave = (EqsArray[3] * ((3 * pow(10, 8)) - EqsArray[16])) / (3 * pow(10, 8));
		cout << "lambda_0 (actual wavelength) = " << actwave << " m\n";
		double temp = actwave;
		actwave = EqsArray[13];
		EqsArray[13] = temp;
	}
	else {

	}
	// true space velocity for v_T
	if (EqsArray[15] != 0 && EqsArray[29] != 0) {
		double truev = sqrt(pow(EqsArray[15],2)+pow(EqsArray[29],2));
		cout << "v_T (true space velocity) = " << truev << " km/s\n";
		double temp = truev;
		truev = EqsArray[30];
		EqsArray[30] = temp;
	} 
	// true space velocity for v_r
	else if (EqsArray[15] != 0 && EqsArray[30] != 0) {
		double tanv = sqrt(pow(EqsArray[30], 2) - pow(EqsArray[15], 2));
		cout << "v_r (radial velocity) = " << tanv << " km/s\n";
		double temp = tanv;
		tanv = EqsArray[29];
		EqsArray[29] = temp;
	} 
	// true space velocity for v_t
	else if (EqsArray[29] != 0 && EqsArray[30] != 0) {
		double radv = sqrt(pow(EqsArray[30], 2) - pow(EqsArray[29], 2));
		cout << "v_r (tangential velocity) = " << radv << " km/s\n";
		double temp = radv;
		radv = EqsArray[15];
		EqsArray[15] = temp;
	}
	else {

	}
	// tangential velocity for v_t
	if (EqsArray[12] != 0 && EqsArray[14] != 0) {
		double tanvel = (4.75 * EqsArray[14]) / EqsArray[12];
		cout << "v_t (tangential velocity) = " << tanvel << " km/s\n";
		double temp = tanvel;
		tanvel = EqsArray[15];
		EqsArray[15] = temp;
	}
	// tangential velocity for p''
	else if (EqsArray[15] != 0 && EqsArray[14] != 0) {
		double para = (4.75 * EqsArray[14]) / EqsArray[15];
		cout << "p'' (parallax) = " << para << " arcsecs\n";
		double temp = para;
		para = EqsArray[12];
		EqsArray[12] = temp;
	} // tangential velocity for mu
	else if (EqsArray[15] != 0 && EqsArray[12] != 0) {
		double mu = (EqsArray[12] * EqsArray[15]) / 4.75;
		cout << "mu (proper motion) = " << mu << " arcsecs/yr\n";
		double temp = mu;
		mu = EqsArray[14];
		EqsArray[14] = temp;
	}
	else {

	}
	// kepler's law p,a,M for P
	if (EqsArray[17] != 0 && EqsArray[18] != 0) {
		double sidereal = sqrt(pow(EqsArray[17],3) / EqsArray[18]);
		cout << "P (sidereal period) = " << sidereal << " yrs\n";
		double temp = sidereal;
		sidereal = EqsArray[31];
		EqsArray[31] = temp;
	}
	// kepler's law p,a,M for a
	else if (EqsArray[31] != 0 && EqsArray[18] != 0) {
		double sidereal = cbrt(pow(EqsArray[31], 2) * EqsArray[18]);
		cout << "a (semimajor axis) = " << sidereal << " AU\n";
		double temp = sidereal;
		sidereal = EqsArray[17];
		EqsArray[17] = temp;
	}
	// kepler's law p,a,M for M
	else if (EqsArray[31] != 0 && EqsArray[17] != 0) {
		double sidereal = pow(EqsArray[17], 3) / pow(EqsArray[31], 2);
		cout << "M_t (total mass) = " << sidereal << " solar masses\n";
		double temp = sidereal;
		sidereal = EqsArray[18];
		EqsArray[18] = temp;
	}
	// kepler's law p,a,M for m_2
	else if (EqsArray[34] != 0 && EqsArray[17] != 0 && EqsArray[31]) {
		double sidereal = (pow(EqsArray[17], 3) / pow(EqsArray[31], 2) - EqsArray[34]);
		cout << "m_2 (mass of second object) = " << sidereal << " solar masses\n";
		double temp = sidereal;
		sidereal = EqsArray[19];
		EqsArray[19] = temp;
	}
	else {

	}
/*	// kepler's law p,a,M with pi for P_s
	if (EqsArray[17] != 0 && EqsArray[34] != 0 && EqsArray[19] != 0) {
		double sidereal2 = sqrt((4 * pow(pi,2) * pow(EqsArray[17],3)) / (1.327 * pow(10,20) * (EqsArray[34] + EqsArray[19])));
		cout << "P_s (sidereal period) = +-" << sidereal2 << " secs\n";
		double temp = sidereal2;
		sidereal2 = EqsArray[32];
		EqsArray[32] = temp;
	}
	else {

	}
	// kepler's law p,a,M with pi for a_m
	if (EqsArray[32] != 0 && EqsArray[34] != 0  && EqsArray[19] != 0) {
		double sidereal2 = cbrt((pow(EqsArray[32],2) * 1.327 * pow(10, 20) * (EqsArray[34] + EqsArray[19])) / (4 * pow(pi, 2)));
		cout << "a_m (semimajor axis) = +-" << sidereal2 << " m\n";
		double temp = sidereal2;
		sidereal2 = EqsArray[33];
		EqsArray[33] = temp;
	}
	else {

	}
	// kepler's law p,a,M with pi for m2
	if (EqsArray[34] != 0 && EqsArray[33] != 0 && EqsArray[32] != 0) {
		double sidereal2 = ((4 * pow(pi, 2) * pow(EqsArray[33],3)) / (1.327 * pow(10, 20) * pow(EqsArray[32],2)))-EqsArray[34];
		cout << "m_2 (mass of second object) = " << sidereal2 << " solar masses\n";
		double temp = sidereal2;
		sidereal2 = EqsArray[19];
		EqsArray[19] = temp;
	}
	else {

	} */

	// m_1 + m_2 = M_t
	if (EqsArray[34] != 0 && EqsArray[19] != 0) {
		double sidereal2 = EqsArray[34] + EqsArray[19];
		cout << "M_t (total mass) = " << sidereal2 << " solar masses\n";
		double temp = sidereal2;
		sidereal2 = EqsArray[18];
		EqsArray[18] = temp;
	}
	else {

	}
	// kepler's law v,M,r for v
	if (EqsArray[20] != 0 && EqsArray[22] != 0) {
		double escvel = sqrt((1.327 * pow(10, 20) * EqsArray[20]) / EqsArray[22]);
		cout << "v_e (escape velocity) = " << escvel << " m/s\n";
		double temp = escvel;
		escvel = EqsArray[21];
		EqsArray[21] = temp;
	}
	// kepler's law v,M,r for r
	else if (EqsArray[20] != 0 && EqsArray[21] != 0) {
		double r = sqrt((1.327 * pow(10, 20) * EqsArray[20]) / pow(EqsArray[21],2));
		cout << "r (distance from center of gravity) = " << r << " m\n";
		double temp = r;
		r = EqsArray[22];
		EqsArray[22] = temp;
	}
	// kepler's law v,M,r for M
	else if (EqsArray[22] != 0 && EqsArray[21] != 0) {
		double M = (pow(EqsArray[21],2) * EqsArray[22]) / (1.327 * pow(10, 20));
		cout << "M_c (center of mass) = " << M << " solar masses\n";
		double temp = M;
		M = EqsArray[20];
		EqsArray[20] = temp;
	}
	else {

	}
	// redshift option 1
	if (EqsArray[3] != 0 && EqsArray[13] != 0) {
		double red = abs(EqsArray[13] - EqsArray[3]) / EqsArray[13];
		cout << "z (redshift) = " << red << "\n";
		double temp = red;
		red = EqsArray[23];
		EqsArray[23] = temp;
	}
	// redshift option 2
	else if (EqsArray[23] != 0) {
		double rad = EqsArray[23] * 3 * pow(10, 8);
		cout << "v_r (radial velocity) = " << rad << " km/s\n";
		double temp = rad;
		rad = EqsArray[16];
		EqsArray[16] = temp;
	}
	else {

	}
	// eccentricity for e
	if (EqsArray[32] != 0 && EqsArray[17] != 0) {
		double rad = sqrt(1 - (pow(EqsArray[32],2) / pow(EqsArray[17],2)));
		cout << "e (eccentricity) = " << rad << "\n";
		double temp = rad;
		rad = EqsArray[33];
		EqsArray[33] = temp;
	} // eccentricity for a
	else if (EqsArray[33] != 0 && EqsArray[32] != 0) {
		double rad = sqrt(pow(EqsArray[32],2) / (1- pow(EqsArray[33],2)));
		cout << "a (semimajor axis) = " << rad << " AU\n";
		double temp = rad;
		rad = EqsArray[17];
		EqsArray[17] = temp;
	}
	// eccentricity for b
	else if (EqsArray[33] != 0 && EqsArray[17] != 0) {
		double rad = sqrt(pow(EqsArray[17],2) - (pow(EqsArray[17],2) * pow(EqsArray[33],2)));
		cout << "b (semiminor axis) = " << rad << " AU\n";
		double temp = rad;
		rad = EqsArray[32];
		EqsArray[32] = temp;
	}
	else {

	}
	//Phillips relationship for M
	if (EqsArray[36] != 0) {
		double M = -21.726 + (2.698 * EqsArray[36]);
		cout << "M (absolute magnitude) = " << M << "\n";
		double temp = M;
		M = EqsArray[8];
		EqsArray[8] = temp;
	}
	//Phillips relationship for deltaM_15
	else if (EqsArray[8] != 0) {
		double M = (EqsArray[8]+21.726) / 2.698;
		cout << "deltaM_15 (change in magnitude over 15 days) = " << M << "\n";
		double temp = M;
		M = EqsArray[36];
		EqsArray[36] = temp;
	}
	else {

	}
	//Hubble time
	if (EqsArray[6] != 0) {
		double t = pow(10,3) / EqsArray[6];
		cout << "t_H (Hubble time) = " << t << "billon years\n";
	}
	else {

	}
	//inverse square law for d_2
	if (EqsArray[37] != 0 || EqsArray[38] != 0 || EqsArray[39] != 0) {
		double t = sqrt((EqsArray[37] * pow(EqsArray[39], 2)) / EqsArray[38]);
		cout << "d_2 (second distance) = " << t << " pc\n";
		double temp = t;
		t = EqsArray[40];
		EqsArray[40] = temp;
	}
	//inverse for I_2
	else if (EqsArray[37] != 0 || EqsArray[39] != 0 || EqsArray[40] != 0) {
		double t = sqrt((EqsArray[37] * pow(EqsArray[39], 2)) / pow(EqsArray[40],2));
		cout << "I_2 (second intensity) = " << t << " watts\n";
		double temp = t;
		t = EqsArray[38];
		EqsArray[38] = temp;
	}
	return 0;
}

int main() {
	char option;
	SetDefaultValues();


	string Plane[] =
	{ "                    _                                      "
		,"                  -=\\`\\                                    "
		,"              |\\ ____\\_\\__                                 "
		,"            -=\\c`\"\"\"\"\"\"\" \"`)                               "
		,"               `~~~~~/ /~~`                                "
		,"                 -==/ /                                    "
		,"                   '-'                                     " };

	string cloud[] =
	{ "                  _  _                                     "
		,"                 ( `   )_                                  "
		,"                (    )    `)                               "
		,"              (_   (_ .  _) _)                             " };


	char holder = ' ';

	int len;
	len = Plane[0].length();
	string border(len, '\xCD');
	string shadow(len + 2, '\xB2');
	cout << "\xC9" << border << "\xBB" << endl;
		cout << "\xBA                                                           \xBA\xB2" << endl;
	cout << "\xBA                                              _            \xBA\xB2" << endl;
	cout << "\xBA                      ASTROJULES            (   )          \xBA\xB2" << endl;
	cout << "\xBA          _ .                             ( `  ) . )       \xBA\xB2" << endl;
	cout << "\xBA        (  _ )_ Creator: Julian Rachman   (_, _(  ,_)_)    \xBA\xB2" << endl;
	cout << "\xBA      (_  _(_ ,)    West High School                       \xBA\xB2" << endl;
	cout << "\xBA                                                           \xBA\xB2" << endl;
	cout << "\xC8" << border << "\xBC\xB2" << endl;
	cout << " " << shadow << endl;

	do {
		cout << "Enter 0 to update values\nEnter 1 to convert\nEnter 2 to compute\nEnter 3 to view\nEnter R to RESET\nEnter E to EXIT\nEnter option: ->  ";
		cin >> option;
		if (option == '0') {
			UpdateValues();
			cout << "Updated array: " << endl;
			DisplayArray();
		}
		else if (option == '1') {
			ConvertValues();
		} 
		else if (option == '2') {
			AnsConvert();
			ComputeValues();
		}
		else if (option == '3') {
			DisplayArray();
		}
		else if (option == 'R' || option == 'r') {
			SetDefaultValues();
			DisplayArray();
		}
		else if (option != 'e' && option != 'E') {
			cout << "Select a valid option from below:\n ";
		}
	} while (option != 'e'&& option != 'E');

	system("cls"); // To Clear The Screen
	cout << "Program has ended. \n" << endl;

	return 0;
}