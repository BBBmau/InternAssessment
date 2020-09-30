fun questionMarks(phrase: String):String{
    var count = 0
    var sum = 0
    var result = ""

    for(i in phrase.indices ){
        print(i)
        if(phrase[i].isDigit() && count >= 3){
            sum += phrase[i] - '0'
            continue
        }
        if('?' == phrase[i]) {
            count++
            if ((count == 6) and (sum == 10)) {
                result = "true"
                break
            }
            continue
        }
        else{
            count = 0
            sum = 0
            result = "false"
        }
    }
    return result
}
