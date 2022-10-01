package com.ayush.tictactoe

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.widget.ImageButton
import android.widget.TextView
import com.ayush.tictactoe.databinding.ActivityMainBinding

class MainActivity : AppCompatActivity() {
    var player=1
    private lateinit var binding: ActivityMainBinding
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        binding = ActivityMainBinding.inflate(layoutInflater)
        setContentView(binding.root)

        val boardstatus = Array(3){IntArray(3) {-1} }

        val board = arrayOf(
                arrayOf(binding.btn1, binding.btn2, binding.btn3),
                arrayOf(binding.btn4, binding.btn5, binding.btn6),
                arrayOf(binding.btn7, binding.btn8, binding.btn9)
        )

        binding.btn1.setOnClickListener {
            binding.btn1.isEnabled=false
            if(player==1){binding.btn1.setImageResource(R.drawable.tilex)
            player=1-player
                boardstatus[0][0]=1}
            else{
                binding.btn1.setImageResource(R.drawable.tileo)
                player=1-player
                boardstatus[0][0]=0
            }
            checkWinner(boardstatus,board,player,binding.msgtext)
        }
        binding.btn2.setOnClickListener {
            binding.btn2.isEnabled=false
            if(player==1){binding.btn2.setImageResource(R.drawable.tilex)
                player=1-player
                boardstatus[0][1]=1}
            else{
                binding.btn2.setImageResource(R.drawable.tileo)
                player=1-player
                boardstatus[0][1]=0
            }
            checkWinner(boardstatus,board,player,binding.msgtext)
        }
        binding.btn3.setOnClickListener {
            binding.btn3.isEnabled=false
            if(player==1){binding.btn3.setImageResource(R.drawable.tilex)
                player=1-player
                boardstatus[0][2]=1}
            else{
                binding.btn3.setImageResource(R.drawable.tileo)
                player=1-player
                boardstatus[0][2]=0
            }
            checkWinner(boardstatus,board,player,binding.msgtext)
        }
        binding.btn4.setOnClickListener {
            binding.btn4.isEnabled=false
            if(player==1){binding.btn4.setImageResource(R.drawable.tilex)
                player=1-player
                boardstatus[1][0]=1}
            else{
                binding.btn4.setImageResource(R.drawable.tileo)
                player=1-player
                boardstatus[1][0]=0
            }
            checkWinner(boardstatus,board,player,binding.msgtext)
        }
        binding.btn5.setOnClickListener {
            binding.btn5.isEnabled=false
            if(player==1){binding.btn5.setImageResource(R.drawable.tilex)
                player=1-player
                boardstatus[1][1]=1}
            else{
                binding.btn5.setImageResource(R.drawable.tileo)
                player=1-player
                boardstatus[1][1]=0
            }
            checkWinner(boardstatus,board,player,binding.msgtext)
        }
        binding.btn6.setOnClickListener {
            binding.btn6.isEnabled=false
            if(player==1){binding.btn6.setImageResource(R.drawable.tilex)
                player=1-player
                boardstatus[1][2]=1}
            else{
                binding.btn6.setImageResource(R.drawable.tileo)
                player=1-player
                boardstatus[1][2]=0
            }
            checkWinner(boardstatus,board,player,binding.msgtext)
        }
        binding.btn7.setOnClickListener {
            binding.btn7.isEnabled=false
            if(player==1){binding.btn7.setImageResource(R.drawable.tilex)
                player=1-player
                boardstatus[2][0]=1}
            else{
                binding.btn7.setImageResource(R.drawable.tileo)
                player=1-player
                boardstatus[2][0]=0
            }
            checkWinner(boardstatus,board,player,binding.msgtext)
        }
        binding.btn8.setOnClickListener {
            binding.btn8.isEnabled=false
            if(player==1){binding.btn8.setImageResource(R.drawable.tilex)
                player=1-player
                boardstatus[2][1]=1}
            else{
                binding.btn8.setImageResource(R.drawable.tileo)
                player=1-player
                boardstatus[2][1]=0
            }
            checkWinner(boardstatus,board,player,binding.msgtext)
        }
        binding.btn9.setOnClickListener {
            binding.btn9.isEnabled=false
            if(player==1){binding.btn9.setImageResource(R.drawable.tilex)
                player=1-player
            boardstatus[2][2]=1}
            else{
                binding.btn9.setImageResource(R.drawable.tileo)
                player=1-player
                boardstatus[2][2]=0
            }
            checkWinner(boardstatus,board,player,binding.msgtext)
        }

        binding.resetbtn.setOnClickListener {
            resetFun(board,boardstatus)
        }

    }
    fun checkWinner(boardstatus: Array<IntArray>,board: Array<Array<ImageButton>>,Player: Int,msgtext: TextView){
        //top row
        if(boardstatus[0][0]==boardstatus[0][1] && boardstatus[0][1]==boardstatus[0][2] && boardstatus[0][0]!=-1){
            disableAll(board)
            if(player==0){
                binding.msgtext.text = "Player X is the Winner!"
            }
            else{
                binding.msgtext.text = "Player O is the Winner!"
            }

        }
        //middle row
        else if(boardstatus[1][0]==boardstatus[1][1] && boardstatus[1][1]==boardstatus[1][2] && boardstatus[1][0]!=-1){
            disableAll(board)
            if(player==0){
                binding.msgtext.text = "Player X is the Winner!"
            }
            else{
                binding.msgtext.text = "Player O is the Winner!"
            }
        }
        //last row
        else if(boardstatus[2][0]==boardstatus[2][1] && boardstatus[2][1]==boardstatus[2][2] && boardstatus[2][0]!=-1){
            disableAll(board)
            if(player==0){
                binding.msgtext.text = "Player X is the Winner!"
            }
            else{
                binding.msgtext.text = "Player O is the Winner!"
            }
        }
        //first col
        else if(boardstatus[0][0]==boardstatus[1][0] && boardstatus[1][0]==boardstatus[2][0] && boardstatus[0][0]!=-1){
            disableAll(board)
            if(player==0){
                binding.msgtext.text = "Player X is the Winner!"
            }
            else{
                binding.msgtext.text = "Player O is the Winner!"
            }
        }
        //second col
        else if(boardstatus[0][1]==boardstatus[1][1] && boardstatus[1][1]==boardstatus[2][1] && boardstatus[0][1]!=-1){
            disableAll(board)
            if(player==0){
                binding.msgtext.text = "Player X is the Winner!"
            }
            else{
                binding.msgtext.text = "Player O is the Winner!"
            }
        }
        //third col
        else if(boardstatus[0][2]==boardstatus[1][2] && boardstatus[1][2]==boardstatus[2][2] && boardstatus[0][2]!=-1){
            disableAll(board)
            if(player==0){
                binding.msgtext.text = "Player X is the Winner!"
            }
            else{
                binding.msgtext.text = "Player O is the Winner!"
            }
        }
        //primary diagonal
        else if(boardstatus[0][0]==boardstatus[1][1] && boardstatus[1][1]==boardstatus[2][2] && boardstatus[0][0]!=-1){
            disableAll(board)
            if(player==0){
                binding.msgtext.text = "Player X is the Winner!"
            }
            else{
                binding.msgtext.text = "Player O is the Winner!"
            }
        }
        //secondary diagonal
        else if(boardstatus[2][0]==boardstatus[1][1] && boardstatus[1][1]==boardstatus[0][2] && boardstatus[2][0]!=-1){
            disableAll(board)
            if(player==0){
                binding.msgtext.text = "Player X is the Winner!"
            }
            else{
                binding.msgtext.text = "Player O is the Winner!"
            }
        }
        else{
            if(player==1){
                binding.msgtext.text = "Player X's turn"
            }
            else{
                binding.msgtext.text = "Player O's turn"
            }
        }
    }
    fun disableAll(board: Array<Array<ImageButton>>){
        var i=0
        while(i<3){
            var j=0
            while(j<3){
                board[i][j].isEnabled=false
                j+=1
            }
            i+=1
        }
    }
    fun resetFun(board: Array<Array<ImageButton>>, boardstatus: Array<IntArray>) {
        var i=0
        while(i<3){
            var j=0
            while(j<3){
                board[i][j].setImageResource(R.drawable.tileempty)
                boardstatus[i][j]=-1
                board[i][j].isEnabled=true
                j+=1
            }
            i+=1
        }
    }
}
