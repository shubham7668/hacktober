import 'package:flutter/material.dart';
import 'package:velocity_x/velocity_x.dart';

class MyTheme {
  static ThemeData lightTheme(BuildContext context) => ThemeData(
        backgroundColor: Colors.white,
        // ignore: deprecated_member_use
        accentColor: Colors.white,
        primaryColor: Colors.black,
        appBarTheme: const AppBarTheme(
          color: Colors.white,
          elevation: 0.0,
          iconTheme: IconThemeData(color: Colors.black),
          titleTextStyle: TextStyle(color: Colors.black),
        ),
      );
  static ThemeData darkTheme(BuildContext context) => ThemeData(
        backgroundColor: const Color(0xff303030),
        // ignore: deprecated_member_use
        accentColor: Colors.black,
        primaryColor: Colors.white,
        brightness: Brightness.dark,
        appBarTheme: const AppBarTheme(
          color: Colors.black,
          elevation: 0.0,
          iconTheme: IconThemeData(color: Colors.white),
          titleTextStyle: TextStyle(color: Colors.white),
        ),
      );
}
