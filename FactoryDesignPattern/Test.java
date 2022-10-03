public class Test {
    public static void main(String[] args) {
        NotificationFactory nf = new NotificationFactory();
        Notification sms = nf.createNotification("SMS");
        Notification email = nf.createNotification("Email");
        Notification push = nf.createNotification("Push");
        sms.notifyUser();
        email.notifyUser();
        push.notifyUser();
    }
}
