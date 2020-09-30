fun reverseWord(original: String): String{

    var reverseWord = ""
            for(x in original.length - 1 downTo 0){
                reverseWord += original[x]

    }
    return reverseWord
}
