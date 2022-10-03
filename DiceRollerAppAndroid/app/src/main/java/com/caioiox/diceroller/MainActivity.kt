package com.caioiox.diceroller

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.Toast
import com.caioiox.diceroller.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    private lateinit var binding: ActivityMainBinding

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)
        binding.rollButton.setOnClickListener { rollDice() }
    }

    private fun rollDice() {
        val diceRolled = Dice(6).dice
        val setDrawableDice =
            when (diceRolled) {
                1 -> binding.dice.setImageResource(R.drawable.dice_1)
                2 -> binding.dice.setImageResource(R.drawable.dice_2)
                3 -> binding.dice.setImageResource(R.drawable.dice_3)
                4 -> binding.dice.setImageResource(R.drawable.dice_4)
                5 -> binding.dice.setImageResource(R.drawable.dice_5)
                else -> binding.dice.setImageResource(R.drawable.dice_6)
            }
        Toast.makeText(this, "you rolled a $diceRolled", Toast.LENGTH_SHORT ).show()
        return setDrawableDice
    }
}