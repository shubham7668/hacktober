import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:url_launcher/url_launcher.dart';
import 'package:velocity_x/velocity_x.dart';

class AboutPage extends StatelessWidget {
  const AboutPage({Key? key}) : super(key: key);

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      backgroundColor: context.backgroundColor,
      appBar: AppBar(
        title: "About".text.semiBold.xl.make(),
        backgroundColor: Colors.transparent,
        elevation: 0.0,
      ),
      body: ListView(
        padding: EdgeInsets.zero,
        children: [
          buildTop(context),
          buildContent(context),
        ],
      ),
    );
  }
}

Widget buildTop(BuildContext context) {
  return Stack(
    clipBehavior: Clip.none,
    alignment: Alignment.center,
    children: [
      Container(
        margin: const EdgeInsets.only(bottom: 110 / 2),
        child: buildCoverImage(),
      ),
      Positioned(
        top: 142 - 110 / 2,
        child: buildProfileImage(context),
      ),
    ],
  );
}

Widget buildCoverImage() {
  return Container(
    color: Colors.grey,
    child: Image.asset(
      "assets/images/cover_image.png",
      height: 152,
      width: double.infinity,
      fit: BoxFit.cover,
    ),
  );
}

Widget buildProfileImage(BuildContext context) {
  return CircleAvatar(
    radius: 120 / 2,
    backgroundColor: context.backgroundColor,
    child: const CircleAvatar(
      backgroundImage: AssetImage("assets/images/profile.png"),
      radius: 106 / 2,
    ),
  );
}

Widget buildContent(BuildContext context) {
  return Container(
    padding: const EdgeInsets.symmetric(horizontal: 48),
    child: Column(
      children: [
        Column(
          children: [
            "Vaibhav Prajapati".text.bold.size(24).make(),
            "Electronics Undergrad, IIIT Sricity"
                .text
                .color(Colors.grey)
                .size(16)
                .make(),
          ],
        ),
        const SizedBox(height: 16),
        Row(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            buildSocial(FontAwesomeIcons.instagram,
                'https://www.instagram.com/vaibhav_dlights/', context),
            const SizedBox(width: 16),
            buildSocial(FontAwesomeIcons.github,
                'https://github.com/VaibhavdLights', context),
            const SizedBox(width: 16),
            buildSocial(FontAwesomeIcons.linkedin,
                'https://www.linkedin.com/in/vaibhavdlights/', context),
            const SizedBox(width: 16),
            buildSocial(FontAwesomeIcons.twitter,
                'https://twitter.com/Vaibhav_dLights', context),
          ],
        ),
        const SizedBox(height: 10),
        const Divider(
          indent: 12,
          endIndent: 12,
        ),
        const SizedBox(height: 8),
        Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            "About".text.bold.size(24).make(),
            const Divider(
              indent: 0,
              endIndent: 253,
            ),
            "The App is developed by Vaibhav Prajapati.\n\nVaibhav Prajapati is a prodigy pursuing his B.Tech/B.E. degree from Indian Institute Of Information & Technology, Sricity.\n\nThis app is developed using Flutter with Dart, and may be unstable as it is only the pre-release version of the stable app."
                .text
                .make(),
            "\nTHANK YOU FOR DOWNLOADING".text.color(Colors.grey).make(),
          ],
        ),
      ],
    ),
  );
}

Widget buildSocial(IconData icon, var url, BuildContext context) {
  return CircleAvatar(
    radius: 24,
    backgroundColor: context.primaryColor,
    foregroundColor: context.backgroundColor,
    child: Material(
      shape: const CircleBorder(),
      clipBehavior: Clip.hardEdge,
      color: Colors.transparent,
      child: InkWell(
        onTap: () {
          launchURL(url);
        },
        child: Center(
            child: Icon(
          icon,
          size: 32,
        )),
      ),
    ),
  );
}

launchURL(String url) async {
  // ignore: deprecated_member_use
  await launch(url);
}
