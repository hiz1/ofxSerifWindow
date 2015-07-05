//
//  ofxSerifWindow.h
//  example
//
//  Created by hiz on 2015/07/05.
//
//

#ifndef __example__ofxSerifWindow__
#define __example__ofxSerifWindow__

#include "ofMain.h"
#include "ofxSerif.h"
#include "ofxTrueTypeFontUC.h"

class ofxSerifWindow : public ofNode {
public:
    ofxSerifWindow() : frame(ofVec2f(-1, -1)), pageNum(0), finished(false), textColor(ofColor::black),
    bgColor(ofColor::white), strokeColor(ofColor::black){}
    // 描画処理
    virtual void customDraw();
    // フォントの読み込み
    void loadFont(const string &filename, int fontsize);
    // 更新処理（speedを2以上にすると、一回で複数文字表示）
    void update(int speed=1);
    // スキップ処理（現在のページの文章を全て表示）
    void skip();
    // 次ページに移動（現在のページの文章が全て表示された後のみ有効）
    void nextPage();
    // 表示する文字列を設定（複数ページ設定可能）
    void setTexts(const vector<string> &texts);
    // 枠の大きさを設定（マイナスで非表示）
    void setFrame(ofVec2f frame);
    // 表示するページ数を設定
    void setPage(int pageNum);
    // 全ページ表示完了したかを返す
    bool isFinished();
    // テキストの表示色を設定
    void setTextColor(ofColor textColor);
    // 枠の表示色を設定
    void setFrameColor(ofColor bgColor, ofColor strokeColor);
private:
    vector<string>    texts;
    ofVec2f           frame;
    int               pageNum;
    ofxSerif          serif;
    ofxTrueTypeFontUC font;
    bool              finished;
    ofColor           textColor;
    ofColor           bgColor;
    ofColor           strokeColor;
};

#endif /* defined(__example__ofxSerifWindow__) */
