// TheHungryKnight.cpp
// Last edited by Jesse Castillo on 09/06/2020
// CS 231 - Computer Programming 1
// A simple program to calculate the cost of a night's stay for a knight.
// Due date is 09/06/2020

#include <iostream>
using namespace std;

int main()
{
	// Printing out a welcome message, using endl to breakup the paragraph
	cout << "Welcome to the Knight's Inn and Tavern, Sir." << endl << "We are honored to serve the King's men during these trying days as our Kingdom readies itself for War." << endl;
	cout << "Your warhorses shall be looked after at our stable and your rooms prepared for you once you have" << endl << "broken your fast with us for the night." << endl;
	cout << "Please free to encourage your men to eat and drink as much as desired, Sir Knight." << endl;
	cout << "The Crown will pay for your meal and lodging for you and your horses, Sir." << endl;
	
	// Assigning the name and characteristic
	string name;
	string charac;
	cout << "Might I ask, what name shall I call you by, Sir?" << endl;
	cin >> name;
	cout << "Excellant! And what is one word that best describes yourself?" << endl;
	cin >> charac;
	cout << "Sir " << name << " the " << charac << ", a most Legendary name! Welcome, my friend!" << endl;

	// Assigning the meal variables, prices and quantity
	float roast_pheasant = 15.10, roast_pheasant_num = 0;
	float beef_stew = 3.49, beef_stew_num = 0;
	float loaf_bread = 5.17, loaf_bread_num = 0;
	float fine_fruit = 1.19, fine_fruit_num = 0;

	// Asking the user how many of each item they would like
	cout << "To get started, how many roast pheasant plates would you like, Sir?" << endl;
	cin >> roast_pheasant_num;
	cout << "Ah, wonderful! And how many bowls of beef stew?" << endl;
	cin >> beef_stew_num;
	cout << "May I interest you in some loaves of bread as well? How many?" << endl;
	cin >> loaf_bread_num;
	cout << "And lastly, how many pieces of fine fruit?" << endl;
	cin >> fine_fruit_num;


	// Now we must tally up the subtotal and taxes
	float sub_total = roast_pheasant * roast_pheasant_num + beef_stew * beef_stew_num + loaf_bread * loaf_bread_num + fine_fruit * fine_fruit_num;
	cout << "A glorious meal indeed, Sir " << name << " the " << charac << "!" << endl;
	cout << "The subtotal of your feast comes to " << sub_total << " silver pieces." << endl;
	cout << "To keep things on the up and up, there shall be a measly 5 percent taxation on your feast fit for a king!" << endl;
	// Determine the grand total after the 5% tax is added to the subtotal
	cout << "Your grand total comes to " << sub_total * 0.05 + sub_total << " silver pieces, a most affordable sum for such a luxurious feast!" << endl;
	cout << "Thank you for your patronage, Sir " << name << " the " << charac << "! A most beneficial friendship has been born on this day!" << endl;
	cout << "This particular line was written in VSCode and pushed to GitHub via Git! Groovy" << endl;


}