import java.time.LocalDateTime
import java.time.format.DateTimeFormatter

fun dateChecker(dateInput: String):String{
    // using the java time to get today's date
    val today = LocalDateTime.now()
    
    //sets the format of how we want the date
    val monthFormat = DateTimeFormatter.ofPattern("MM/dd/yyyy")
    
    //statement checks whether the date inputted is the same as today's date
    if(today.format(monthFormat) == dateInput){
        return "The Date entered is today!"
    }else{
        return "The Date entered does not match today's"
    }
}
