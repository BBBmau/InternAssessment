import java.util.Vector
// function to check whether character is a punctuation
fun isPunt(c : Char): Boolean{
    return c == ','
            || c == '.'
            || c == '!'
            || c == '?'
            || c == ':'
            || c == ';'
}

fun popular(paragraph: String): String{
    var multiple = false
    var set = Vector<String>()
    var word = ""
    var counter: Int
    var most = 0
    var top = ""
    // Converts all characters in string to lower case
    var MainParagraph = paragraph.toLowerCase()
    
    // Grabs each word in paragraph string and stores in vector named "set"
    for (i in MainParagraph.indices){
        if(isPunt(MainParagraph[i])){
            continue
        }
        if(!MainParagraph[i].isLetter() && !MainParagraph[i].isDigit()){
            set.addElement(word)
            word = ""
            continue
        }
        word += MainParagraph[i]
        if(i ==  MainParagraph.length - 1){
            set.addElement(word)
        }
    }

    // goes through each word and counts how many exist in the paragraph string
    for(k in 0 until set.size){
        counter = 0
        for (j in 0 until set.size){
            if(set[k] == set[j]){
                counter++
            }
        }
        
        // nested statement checks whether multiple words have the same amount of occurences in the string
        if((counter >= most) && (top != set[k])){
                if(counter == most){
                    multiple = true
                }
                else if(counter > most){
                    multiple = false
                }
                top = set[k]
                most = counter
            }
    }
    if(multiple){
        top = "No Most Popular Word Exists."
    }
    return top
}
