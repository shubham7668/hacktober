import 'package:flutter/material.dart';
import 'package:flutter_tts/flutter_tts.dart';
import 'package:velocity_x/velocity_x.dart';

class HomePage extends StatefulWidget {
  const HomePage({Key? key}) : super(key: key);

  @override
  State<HomePage> createState() => _HomePageState();
}

class _HomePageState extends State<HomePage> {
  final FlutterTts flutterTts = FlutterTts();
  speak(String text) async {
    await flutterTts.setLanguage("en-IN");
    await flutterTts.setPitch(1.0);
    await flutterTts.speak(text);
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
          iconTheme: const IconThemeData(),
          title: "Color Detector".text.semiBold.xl.make(),
          elevation: 0.0,
          backgroundColor: Colors.transparent,
          actions: [
            IconButton(
                onPressed: () {
                  ScaffoldMessenger.of(context).showSnackBar(const SnackBar(
                    content: Text("Coming Soon"),
                    behavior: SnackBarBehavior.floating,
                    elevation: 6.0,
                  ));
                },
                icon: const Icon(Icons.camera_alt)),
            IconButton(
              icon: const Icon(Icons.info),
              onPressed: () {
                Navigator.pushNamed(context, '/about');
              },
            ),
          ]),
      body: Column(
        children: [
          GestureDetector(
            onTap: () {
              ScaffoldMessenger.of(context).showSnackBar(const SnackBar(
                content: Text("Color : Red"),
                behavior: SnackBarBehavior.floating,
                elevation: 6.0,
              ));
            },
            onDoubleTap: () {
              speak("This Color is. Red");
            },
            child: Container(
              alignment: Alignment.center,
              height: 100,
              width: context.screenWidth,
              color: Vx.red800,
              child: "Tap/Double Tap Here".text.make(),
            ),
          ).expand(),
          GestureDetector(
            onTap: () {
              ScaffoldMessenger.of(context).showSnackBar(const SnackBar(
                content: Text("Color : Blue"),
                behavior: SnackBarBehavior.floating,
                elevation: 6.0,
              ));
            },
            onDoubleTap: () {
              speak("This Color is. Blue");
            },
            child: Container(
              alignment: Alignment.center,
              height: 100,
              width: context.screenWidth,
              color: Vx.blue800,
              child: "Tap/Double Tap Here".text.make(),
            ),
          ).expand(),
          GestureDetector(
            onTap: () {
              ScaffoldMessenger.of(context).showSnackBar(const SnackBar(
                content: Text("Color : Green"),
                behavior: SnackBarBehavior.floating,
                elevation: 6.0,
              ));
            },
            onDoubleTap: () {
              speak("This Color is. Green");
            },
            child: Container(
              alignment: Alignment.center,
              height: 100,
              width: context.screenWidth,
              color: Vx.green700,
              child: "Tap/Double Tap Here".text.make(),
            ),
          ).expand(),
          GestureDetector(
            onTap: () {
              ScaffoldMessenger.of(context).showSnackBar(const SnackBar(
                content: Text("Color : Orange"),
                behavior: SnackBarBehavior.floating,
                elevation: 6.0,
              ));
            },
            onDoubleTap: () {
              speak("This Color is. Orange");
            },
            child: Container(
              alignment: Alignment.center,
              height: 100,
              width: context.screenWidth,
              color: Vx.orange500,
              child: "Tap/Double Tap Here".text.make(),
            ),
          ).expand(),
          GestureDetector(
            onTap: () {
              ScaffoldMessenger.of(context).showSnackBar(const SnackBar(
                content: Text("Color : Purple"),
                behavior: SnackBarBehavior.floating,
                elevation: 6.0,
              ));
            },
            onDoubleTap: () {
              speak("This Color is. Purple");
            },
            child: Container(
              alignment: Alignment.center,
              height: 100,
              width: context.screenWidth,
              color: Vx.purple700,
              child: "Tap/Double Tap Here".text.make(),
            ),
          ).expand(),
          GestureDetector(
            onTap: () {
              ScaffoldMessenger.of(context).showSnackBar(const SnackBar(
                content: Text("Color : Yellow"),
                behavior: SnackBarBehavior.floating,
                elevation: 6.0,
              ));
            },
            onDoubleTap: () {
              speak("This Color is. Yellow");
            },
            child: Container(
              alignment: Alignment.center,
              height: 100,
              width: context.screenWidth,
              color: Vx.yellow400,
              child: "Tap/Double Tap Here".text.make(),
            ),
          ).expand(),
        ],
      ),
    );
  }
}
