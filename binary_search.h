int binarySearch (char aray[][Length], int size, char search_item[LENGTH]){

    int first = 0, last = size -1;
    bool found = false;
    int position = -1, middle;
    while (!found && first <= last){
        middle = (first + last ) / 2;
        if ((strcmp(array[middle],search_item))==0){
            position = middle;
            found = true;
        }else
            if (array[middle] < search_item)
                first = middle + 1;
            else
                last = middle -1;
    }
    return position;
}
