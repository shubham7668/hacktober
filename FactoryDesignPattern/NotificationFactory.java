public class NotificationFactory {
    Notification createNotification(String type) {
        switch (type) {
            case "SMS":
                return new SMSNotification();
            case "Email":
                return new EmailNotification();
            case "Push":
                return new PushNotification();
        }
        return null;
    }
}