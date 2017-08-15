package com.ndk.test;

/**
 * Created by gavin
 * Time 2017/8/15  9:45
 * Email:molu_clown@163.com
 */

public class FileUtils {


    public static native void diff(String path, String pattern_Path, int file_num);


    public native int sum(String name,int a,int b);



    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }




}
