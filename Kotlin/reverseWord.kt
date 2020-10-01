fun reverseWord(original: String): String{

    var reverseWord = ""
        // Starts for loop at the end of the string in order to grab character and store at the front of string "reverse"
            for(x in original.length - 1 downTo 0){
                reverseWord += original[x]

    }
    return reverseWord
}
