#include <iostream>
using namespace std;

int main() {

const int size = 26;
unsigned int l1, l2;
int i, j;
int f1 = 0, f2 = 0;
char arr1[size], arr2[size], arr3[size], arr4[size];
char U[size] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
cout << "Write a length of first many (less then 27): ";
cin >> l1;

if (l1 > size || !cin) {
cout << "Error";
return 0;}
cout << "Enter elements of the first many: ";
for (i = 0; i < l1; i++) {
cin >> arr1[i];}


for (i = 0; i < l1; i++) {
for (j = 0; j < size; j++) {
if (arr1[i] == U[j]) break;
else if (arr1[i] != U[j] && j == size - 1) {
cout << "Error";
return 0;}}}


for (i = 0; i < l1; i++) {
for (j = i + 1; j < l1; j++)
if (arr1[i] == arr1[j]) {
cout << "Error";
return 0;}}

cout << "Write a length of second many (less then 27): ";
cin >> l2;

if (l2 > size || !cin) {
cout << "Error";
return 0;}
cout << "Enter elements of the second many: ";
for (i = 0; i < l2; i++) {
cin >> arr2[i];}
cout << "-----------------------------------------------------------------------------------------" << endl;

	
for (i = 0; i < l1; i++) {
for (j = 0; j < size; j++) {
if (arr1[i] == U[j]) break;
else if (arr1[i] != U[j] && j == size - 1) {
cout << "Error";
return 0;}}}


for (i = 0; i < l2; i++) {
for (j = i + 1; j < l2; j++)
if (arr2[i] == arr2[j]) {
cout << "Error";
return 0;}}


for (i = 0; i < l1; i++, f1++) {
arr3[f1] = arr1[i];}
for (i = 0; i < l2; i++, f1++) {
arr3[f1] = arr2[i];}


for (i = 0; i < f1; i++) {
for (j = i + 1; j < f1; j++) {
if (arr3[i] == arr3[j]) {
for (int g = j; g < f1; g++) {
arr3[g] = arr3[g + 1];}
f1--;}}}

cout << "Union: "; //Об'єднання
for (i = 0; i < f1; i++) {
cout << arr3[i] << " ";}
cout << "\nPower of union: " << f1 << endl; //Потужність об'єднання

for (i = 0; i < l1; i++) {
for (j = 0; j < l2; j++) {
if (arr1[i] == arr2[j]) break;
else if (arr1[i] != arr2[j] && j == l2 - 1) {
arr4[f2] = arr1[i];
f2++;}}}

for (i = 0; i < l2; i++) {
for (j = 0; j < l1; j++) {
if (arr2[i] == arr1[j]) break;
else if (arr2[i] != arr1[j] && j == l1 - 1) {
arr4[f2] = arr2[i];
f2++;}}}



cout << "Symmetric: ";//Об'єднання
for (i = 0; i < f2; i++) {
cout << arr4[i] << " ";}
cout << "\nPower of symmetric difference: " << f2 << endl; //Потужність симетричної різниці
cout << "-----------------------------------------------------------------------------------------" << endl;
return 0;}
