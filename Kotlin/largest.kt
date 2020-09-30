fun largest(paragraph: String): String{
    var largest = ""
    var word = ""

    for (i in paragraph.indices){
        if (!paragraph[i].isLetter()){
            if(word.length > largest.length){
                largest = word
            }
            word = ""
            continue
        }
        word += paragraph[i]
    }
    return largest
}
