fun largest(paragraph: String): String{
    var largest = ""
    var word = ""
    
    // loops for the amount of characters exist in the paragraph string
    for (i in paragraph.indices){
        // statement checks whether character is a letter
        if (!paragraph[i].isLetter()){
            // if met, it checks whether the word string that is used to store each word in the string is greater than the previously
            // stored word that is in the string "largest"
            if(word.length > largest.length){
                largest = word
            }
            // resets the word string
            word = ""
            continue
        }
        // adds character to the word string
        word += paragraph[i]
    }
    return largest
}
