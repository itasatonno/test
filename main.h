#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std; SHHHHHHHHSHHHHHSHHHHHSHHHHHSHHHHH

vector<vector<string>> rubrica;

void write(string s, int minChar = 30) {
    s.resize(minChar, ' ');
        cout << s;
	}

	void writeln(string s, int minChar = 30) {
	    write(s, minChar);
	        cout << endl;
		}

		int getIndexOf(string firstName, string lastName ) {
		    int l = rubrica.size();
		        for (int i = 0; i < l; i++) {
			        vector<string> r = rubrica[i];
				        if (r[0] == firstName && r[1] == lastName) return i;
					    }
					        return -1;
						}

						vector<string> addContact(string firstName, string lastName, string phone ) {
						    vector<string> contact = { firstName, lastName, phone };
						        rubrica.push_back(contact);
							    return contact;
							    }

							    void printContact(int index) {
							        vector<string> contact = rubrica[index];
								    write(contact[0]);
								        write(contact[1]);
									    writeln(contact[2]);
									    }

									    void printContact(string firstName, string lastName) {
									        printContact(getIndexOf(firstName, lastName));
										}

										void removeContact(int index) {
										    rubrica.erase(rubrica.begin() + index);
										    }

										    void removeContact(string firstName, string lastName) {
										        removeContact(getIndexOf(firstName, lastName));
											}

											void printContacts(int skip = 0, int limit = 10 ) {
											    int size = rubrica.size();
											        int l = size > skip + limit ? limit : size - skip;
												    for (int i = skip; i < l; i++) {
												            printContact(i);
													        }
														}

														string firstNames[] = { "Giovanni", "Alberto", "Teresa", "Pietro", "Pino", "Luisa", "Sara", "Caterina", "Ugo", "Assunta" };
														string lastNames[] = { "Cracco", "Rossi", "Verti", "Marroni", "Cannavacciuolo", "Quadrato", "Messi", "Gattuso", "Caruso", "Buondonno" };
														void seed(int elements) {
														    for (int e = 0; e < elements; e++) {
														            string phone;
															            for ( int i = 0; i < 10; i++) {
																                phone +=  to_string(rand() %10);
																		        }
																			        addContact(firstNames[rand() %10], lastNames[rand() %10], phone);
																				    }
																				    }

																				    int main() {
																				        seed(100);
																					    printContacts(0, 10);
																					        return 0;
																						} 


