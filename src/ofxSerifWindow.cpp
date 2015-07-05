//
//  ofxSerifWindow.cpp
//  example
//
//  Created by hiz on 2015/07/05.
//
//

#include "ofxSerifWindow.h"

// 描画処理
void ofxSerifWindow::customDraw() {
    ofPushStyle();
    if(frame.x >= 0 && frame.y >= 0) {
        ofFill();
        ofSetColor(bgColor);
        ofRectRounded(0, 0, frame.x, frame.y, 4);
        ofNoFill();
        ofSetLineWidth(2);
        ofSetColor(strokeColor);
        ofRectRounded(0, 0, frame.x, frame.y, 4);
    }
    if(font.isLoaded()) {
        ofSetColor(textColor);
        font.drawString(serif.getText(), 4, 4);
    }
    ofPopStyle();
}

// フォントの読み込み
void ofxSerifWindow::loadFont(const string &filename, int fontsize) {
    font.loadFont(filename, fontsize);
}

// 更新処理（speedを2以上にすると、一回で複数文字表示）
void ofxSerifWindow::update(int speed) {
    for(int i=0;i<speed;i++) {
        serif.fireEvent(OFXSERIF_UPDATE);
        serif.updateEvent();
    }
    if(serif.isFinished()) {
        if(this->texts.size() <= pageNum) {
            finished = true;
            return;
        }
        pageNum ++;
        setPage(pageNum);
    }
}

// スキップ処理（現在のページの文章を全て表示）
void ofxSerifWindow::skip() {
    serif.fireEvent(OFXSERIF_SKIP);
}

// 次ページに移動（文章が全て表示された後のみ有効）
void ofxSerifWindow::nextPage() {
    serif.fireEvent(OFXSERIF_NEXTPAGE);
}

// 表示する文字列を設定（複数ページ設定可能）
void ofxSerifWindow::setTexts(const vector<string> &texts) {
    this->texts.clear();
    for(vector<string>::const_iterator ite = texts.begin();ite != texts.end();ite ++) {
        this->texts.push_back(*ite);
    }
    setPage(0);
    finished = false;
}

// 枠の大きさを設定（マイナスで非表示）
void ofxSerifWindow::setFrame(ofVec2f frame) {
    this->frame = frame;
}

// 表示するページ数を設定
void ofxSerifWindow::setPage(int pageNum) {
    if(this->texts.size() <= pageNum) return;
    
    this->pageNum = pageNum;
    serif.setText(this->texts[pageNum]);
}

// 全ページ表示完了したかを返す
bool ofxSerifWindow::isFinished() {
    return finished;
}

// テキストの表示色を設定
void ofxSerifWindow::setTextColor(ofColor textColor) {
    this->textColor = textColor;
}

// 枠の表示色を設定
void ofxSerifWindow::setFrameColor(ofColor bgColor, ofColor strokeColor) {
    this->bgColor     = bgColor;
    this->strokeColor = strokeColor;
}

