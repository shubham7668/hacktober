import 'package:flutter/material.dart';
import 'package:world_time/Pages/choose_location.dart';
import 'package:world_time/Pages/home.dart';
import 'package:world_time/Pages/loading.dart';


void main() => runApp(MaterialApp(
  // initialRoute: '/home',
  routes: {
    '/': (context) => const Loading(),
    '/home': (context) => const Home(),
    '/location': (context)=> const ChooseLocation(),
  },
));



