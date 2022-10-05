package com.example.ageinminutescalculator

import android.app.DatePickerDialog
import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Button
import android.widget.TextView
import android.widget.Toast
import java.text.SimpleDateFormat
import java.util.*

class MainActivity : AppCompatActivity() {
    var tv : TextView? = null
    var ageinMinutes : TextView? = null
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)


        Toast.makeText(this,"The Date,Month and Year is set by default to 14/09/2021." +
                "Please Change it as per your choice.",Toast.LENGTH_LONG).show()

        val button = findViewById<Button>(R.id.button2)
        tv = findViewById(R.id.textView4)
        ageinMinutes = findViewById(R.id.textView7)
        button.setOnClickListener {
            date()
        }
    }

    fun date(){
        val myCalender = Calendar.getInstance()
        val year = myCalender.get(Calendar.YEAR)
        val month = myCalender.get(Calendar.MONTH)
        val day = myCalender.get(Calendar.DAY_OF_MONTH)

        DatePickerDialog(this,
            {view,year,month,day ->
                Toast.makeText(this,"Year is $year, month is ${month + 1} and day is $day.",Toast.LENGTH_LONG).show()
                val selecteddate = "$day/${month + 1}/$year"
                tv?.text = selecteddate

                val sdf = SimpleDateFormat("dd/MM/yyyy", Locale.ENGLISH)
                val thedate = sdf.parse(selecteddate)

                val selectedateinMinutes = thedate.time/60000
                val currentDate = sdf.parse(sdf.format(System.currentTimeMillis()))
                val currentdateinMinutes = currentDate.time/60000

                val difference = currentdateinMinutes - selectedateinMinutes
                ageinMinutes?.text = difference.toString()

            },
            year,
            month,
            day
            ).show()
    }
}
