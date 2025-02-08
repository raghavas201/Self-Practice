// LEETCODE POTD 08-02-25
// PORBLEM NUMBER 2349
// Design a Number Container System


class NumberContainers {
    unordered_map<int,int> index_number;
    unordered_map<int,set<int>> number_indices;
public:
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        //If index is already in use then remove the last number
        if(index_number.count(index)){
            number_indices[index_number[index]].erase(index);
            if(number_indices[index_number[index]].size()==0)
                number_indices.erase(index_number[index]);
        }
        
        //Insert new number
        index_number[index]=number;
        number_indices[number].insert(index);
    }
    
    int find(int number) {
        if(!number_indices.count(number))
            return -1;
        return *(number_indices[number].begin());
    }
};


// This `NumberContainers` class maintains a mapping of indices to numbers and tracks the indices associated with each number.
// The `change` method updates the mapping,
// ensuring old values are removed,
// while the `find` method returns the smallest index containing a given number or `-1` if the number is absent.