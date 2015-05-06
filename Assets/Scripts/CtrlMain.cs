﻿using UnityEngine;
using System.Collections;
using System.IO;

public class CtrlMain : MonoBehaviour
{
	public GameObject _gmoAndroidPlugins;
	CtrlAndroidPlugins _ctrAndroidPlugins;

	string _strDcimPath = "";

	bool _isEscKeyPushed = false;
	bool _isSecondCheckStarted = false;

	float _fltDeltaTime = 0f;

	string[] _strFileNames;

	void Start ()
	{
		_ctrAndroidPlugins = _gmoAndroidPlugins.GetComponent<CtrlAndroidPlugins>();

		// DCIMディレクトリのパスを取得する.
		_strDcimPath = _ctrAndroidPlugins.GetText();
		// DCIMディレクトリ内にあるファイルを取得.
		_strFileNames = Directory.GetDirectories(_strDcimPath);
	}
	void Update()
	{
		if (Application.platform == RuntimePlatform.Android)
		{
			if(_isEscKeyPushed)
			{
				if(_isSecondCheckStarted)
				{
					if(Input.GetKey(KeyCode.Escape))
					{
						// 戻るボタンを一定時間以内に二回押下したらアプリケーション終了.
			      Application.Quit();
					}
				}
				else
				{
					if(! Input.GetKey(KeyCode.Escape))
					{
						// 最初の戻るボタン押下後、戻るボタンから一度指を離したら2回目のチェック開始.
						_isSecondCheckStarted = true;
					}
				}
				// 前フレームからの経過時間を加算する.
				_fltDeltaTime += Time.deltaTime;
				// トーストを表示して一定時間が経過したらフラグをリセット.
				if(_fltDeltaTime >= 3f)
				{
					_fltDeltaTime = 0f;
					_isEscKeyPushed = false;
				}
			}
			else
			{
				if(Input.GetKey(KeyCode.Escape))
				{
					// トーストを表示.
					_ctrAndroidPlugins.ShowToast();
					_isEscKeyPushed = true;
					_isSecondCheckStarted = false;
				}
			}
		}
	}
	void OnGUI()
	{
		if(GUI.Button(new Rect(300f, 20f, 200f, 200f), "GetData"))
		{
			_ctrAndroidPlugins.ShowImageView();
		}
		GUI.skin.label.fontSize = 40;
		GUI.Label(new Rect(20f, 20f, 800f, 100f), _strDcimPath);
		GUI.Label(new Rect(20f, 130f, 800f, 100f), "Dir " + Directory.Exists(_strDcimPath + "/Camera"));
		GUI.Label(new Rect(20f, 250f, 800f, 100f), "File " + File.Exists(_strDcimPath + "/Camera/IMG_20150327_174416.jpg"));
		float fltY = 360f;
		if(_strFileNames.Length > 0)
		{
			for(int i = _strFileNames.Length - 1; i >= 0; i--)
			{
				GUI.Label(new Rect(20f, (fltY + (i * 120)), 800f, 100f), _strFileNames[i]);
			}
		}
	}
}