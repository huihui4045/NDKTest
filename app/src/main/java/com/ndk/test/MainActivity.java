package com.ndk.test;

import android.os.Bundle;
import android.support.v7.app.AppCompatActivity;
import android.util.Log;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    private String TAG="MainActivity";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);


    TextView tv = (TextView) findViewById(R.id.sample_text);



        diff();


        FileUtils fileUtils=new FileUtils();

        tv.setText(String.valueOf(fileUtils.sum("huihui",12,34)));

    }


    public void diff(){

        Log.d(TAG, "diff");
        FileUtils.diff("x","s",3);

    }


}
