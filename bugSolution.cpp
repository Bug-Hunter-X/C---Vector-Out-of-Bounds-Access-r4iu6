std::vector<int> vec; 
 for (int i = 0; i < 10; ++i) { 
     vec.push_back(i); 
 } 
 
 // Safe way to access elements: using at() which throws an exception if out of bounds
try { 
  int value = vec.at(5); // Accesses the element at index 5
  std::cout << value << std::endl; 
} catch (const std::out_of_range& oor) { 
  std::cerr << "Out of Range error: " << oor.what() << '\n'; 
}

//Another safe way to access elements: check the index first
if (vec.size() > 5) { 
 int value = vec[5]; // Accesses the element at index 5 
 std::cout << value << std::endl; 
} else { 
  std::cerr << "Index out of bounds!" << std::endl; 
}
