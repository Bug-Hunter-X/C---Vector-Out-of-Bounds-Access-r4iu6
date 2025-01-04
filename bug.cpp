std::vector<int> vec; 
 for (int i = 0; i < 10; ++i) { 
     vec.push_back(i); 
 } 
 
 // Trying to access an element outside the vector bounds 
 int value = vec[10];