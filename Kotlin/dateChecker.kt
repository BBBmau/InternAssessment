import java.time.LocalDateTime
import java.time.format.DateTimeFormatter

fun dateChecker(dateInput: String):String{
    val today = LocalDateTime.now()
    val monthFormat = DateTimeFormatter.ofPattern("MM/dd/yyyy")
    if(today.format(monthFormat) == dateInput){
        return "The Date entered is today!"
    }else{
        return "The Date entered does not match today's"
    }
}
