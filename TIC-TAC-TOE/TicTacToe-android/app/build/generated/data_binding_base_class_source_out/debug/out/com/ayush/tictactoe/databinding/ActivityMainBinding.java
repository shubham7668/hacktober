// Generated by view binder compiler. Do not edit!
package com.ayush.tictactoe.databinding;

import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.ImageButton;
import android.widget.LinearLayout;
import android.widget.TextView;
import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.viewbinding.ViewBinding;
import com.ayush.tictactoe.R;
import java.lang.NullPointerException;
import java.lang.Override;
import java.lang.String;

public final class ActivityMainBinding implements ViewBinding {
  @NonNull
  private final LinearLayout rootView;

  @NonNull
  public final ImageButton btn1;

  @NonNull
  public final ImageButton btn2;

  @NonNull
  public final ImageButton btn3;

  @NonNull
  public final ImageButton btn4;

  @NonNull
  public final ImageButton btn5;

  @NonNull
  public final ImageButton btn6;

  @NonNull
  public final ImageButton btn7;

  @NonNull
  public final ImageButton btn8;

  @NonNull
  public final ImageButton btn9;

  @NonNull
  public final TextView msgtext;

  @NonNull
  public final Button resetbtn;

  private ActivityMainBinding(@NonNull LinearLayout rootView, @NonNull ImageButton btn1,
      @NonNull ImageButton btn2, @NonNull ImageButton btn3, @NonNull ImageButton btn4,
      @NonNull ImageButton btn5, @NonNull ImageButton btn6, @NonNull ImageButton btn7,
      @NonNull ImageButton btn8, @NonNull ImageButton btn9, @NonNull TextView msgtext,
      @NonNull Button resetbtn) {
    this.rootView = rootView;
    this.btn1 = btn1;
    this.btn2 = btn2;
    this.btn3 = btn3;
    this.btn4 = btn4;
    this.btn5 = btn5;
    this.btn6 = btn6;
    this.btn7 = btn7;
    this.btn8 = btn8;
    this.btn9 = btn9;
    this.msgtext = msgtext;
    this.resetbtn = resetbtn;
  }

  @Override
  @NonNull
  public LinearLayout getRoot() {
    return rootView;
  }

  @NonNull
  public static ActivityMainBinding inflate(@NonNull LayoutInflater inflater) {
    return inflate(inflater, null, false);
  }

  @NonNull
  public static ActivityMainBinding inflate(@NonNull LayoutInflater inflater,
      @Nullable ViewGroup parent, boolean attachToParent) {
    View root = inflater.inflate(R.layout.activity_main, parent, false);
    if (attachToParent) {
      parent.addView(root);
    }
    return bind(root);
  }

  @NonNull
  public static ActivityMainBinding bind(@NonNull View rootView) {
    // The body of this method is generated in a way you would not otherwise write.
    // This is done to optimize the compiled bytecode for size and performance.
    int id;
    missingId: {
      id = R.id.btn1;
      ImageButton btn1 = rootView.findViewById(id);
      if (btn1 == null) {
        break missingId;
      }

      id = R.id.btn2;
      ImageButton btn2 = rootView.findViewById(id);
      if (btn2 == null) {
        break missingId;
      }

      id = R.id.btn3;
      ImageButton btn3 = rootView.findViewById(id);
      if (btn3 == null) {
        break missingId;
      }

      id = R.id.btn4;
      ImageButton btn4 = rootView.findViewById(id);
      if (btn4 == null) {
        break missingId;
      }

      id = R.id.btn5;
      ImageButton btn5 = rootView.findViewById(id);
      if (btn5 == null) {
        break missingId;
      }

      id = R.id.btn6;
      ImageButton btn6 = rootView.findViewById(id);
      if (btn6 == null) {
        break missingId;
      }

      id = R.id.btn7;
      ImageButton btn7 = rootView.findViewById(id);
      if (btn7 == null) {
        break missingId;
      }

      id = R.id.btn8;
      ImageButton btn8 = rootView.findViewById(id);
      if (btn8 == null) {
        break missingId;
      }

      id = R.id.btn9;
      ImageButton btn9 = rootView.findViewById(id);
      if (btn9 == null) {
        break missingId;
      }

      id = R.id.msgtext;
      TextView msgtext = rootView.findViewById(id);
      if (msgtext == null) {
        break missingId;
      }

      id = R.id.resetbtn;
      Button resetbtn = rootView.findViewById(id);
      if (resetbtn == null) {
        break missingId;
      }

      return new ActivityMainBinding((LinearLayout) rootView, btn1, btn2, btn3, btn4, btn5, btn6,
          btn7, btn8, btn9, msgtext, resetbtn);
    }
    String missingId = rootView.getResources().getResourceName(id);
    throw new NullPointerException("Missing required view with ID: ".concat(missingId));
  }
}
