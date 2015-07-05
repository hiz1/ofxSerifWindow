#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    serifWindow.setFrame(ofVec2f(ofGetWidth()-20, 200));
    serifWindow.setPosition(10, ofGetHeight() - 210, 0);
    serifWindow.loadFont("migu-1p-regular.ttf", 12);
    serifWindow.setTextColor(ofColor::darkCyan);
    serifWindow.setFrameColor(ofColor::lightGray, ofColor::darkGray);
    vector<string> texts;
    texts.push_back("何も事実せっかくその講演社というのの後に及ぼすたます。\nとにかく事実を換言人はもしその支配でたかもがしからくれませをも謝罪訊かなないて、ちょっとにはなりあるませませた。\n国家にするない事はけっして今がもしたましう。\nいよいよ岡田さんが研究金力これから供に思っで肩こういう機会私か落第とについてご活動なでれですて、\nその十一月はこれか人具合に向いて、\n嘉納さんのので女のあなたをどうしてもご自覚となるてそれ市街が皆話より叱りようにもしご安心に積んでしょですて、\n同時にいやしくもお話しでなるますてならある訳が積んですない。");
    texts.push_back("またまたごシャツに諦めのはわざわざ立派としたと、この国家のは思うでしょてって鮒が釣らていんた。\n同じ上封建のためこの他もここいっぱいを見るなかと久原さんを合ったない、\n他人の事実なというお自白たないたば、社会の中を概念に今ばかりの人を今考えて来から、\n更にの十月に広めよけれどもその後にぷんぷんさたんとあっうものだて、好いですなてそれだけご道延ばすん方たなます。\nそれでも人か必要か評価からありないて、今日上個性が縛りつけておきます日をお腐敗の大体へもっでしょな。\n事実をはあたかも思うししならんましまして、至極もうなって発展もどうだるな事だ。またお中止でできるがもしまいなのですながら、\n新には、依然としてそれかしば断わろれないあるなりられませたとして、理論は進んのでいるたいう。");
    texts.push_back("何はたとい矛盾ののがお担任は行なわて得るたたですなくて、三一の国家に始終いうらしいという附着ないから、\nまたそうした作物の校長とするれから、あなたかを私の画から話がするといるでのませますと計画取り巻かて観念据えいうで。\n見識をまた大森さんをたとえば少し思うたのですたで。岡田さんはそう学生に集まってあるなのないだろです。（\nけれども人達を飲ん時たですですてずはしあるますば、）再びするだ人達で、\ntoの最初までありからするという、知人の修養も大体の所くらい知れさのを罹りだって一言院据えのでいたという同場所うので。");
    serifWindow.setTexts(texts);
}

//--------------------------------------------------------------
void ofApp::update(){
    if(ofGetKeyPressed('z') || ofGetKeyPressed('Z')) serifWindow.nextPage();
    if(ofGetKeyPressed('x') || ofGetKeyPressed('X')) {
        serifWindow.skip();
        serifWindow.nextPage();
    }
    serifWindow.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(ofColor::black);
    if(!serifWindow.isFinished()) {
        serifWindow.draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
