#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //create lines
    ofBackground(ofColor::black);
    ofSetLineWidth(3);
    
    
    float x;
    float xLineDistance = 20;
    float y;
    
    for(x=0;x<ofGetWidth();x+=xLineDistance){
        ofSetColor(ofColor::white);
        ofDrawLine(x, 0, x, ofGetHeight());
    }
    
    //
    
    
    //------------------------------------------------------------
    
    
    for(int i=3; i<collectPoints.size(); i++)
    {
        
        if(i !=3)
        {
            ofSetLineWidth(3);
            
            //get the last point
            ofPoint lastPoint = collectPoints[i-1];
            ofPoint lastPointnd =collectPoints[i-2];
            ofPoint lastPointrd =collectPoints[i-3];
            ofPoint thisPoint = collectPoints[i];
            
            ofVec2f p0(thisPoint);
            ofVec2f p1(lastPoint);
            ofVec2f p2(lastPointnd);
            ofVec2f p3(lastPointrd);
            
            
            
            
            
            //----------------------------construct mask---------------------------
            
            
            ofPath trapezoidMask;
            ofColor colors = ofColor(0);
            trapezoidMask.setFillColor(colors);
            trapezoidMask.rectangle(0,0,ofGetWidth(),ofGetHeight());
            trapezoidMask.moveTo(p0);
            trapezoidMask.lineTo(p1);
            trapezoidMask.lineTo(p2);
            trapezoidMask.lineTo(p3);
            trapezoidMask.lineTo(p0);
            
            
            trapezoidMask.draw();
            
            ofSetColor(255, 0, 0);
            ofDrawLine(p0, p1);
            ofDrawLine(p1, p2);
            ofDrawLine(p2, p3);
            ofDrawLine(p3, p0);
            
            
            
            
            //----------------------------------------------------------------------------
            
            
        }
        
    }
    
    
    
}
//void ofApp:: keyPressed(int key){
//    if(key == 'c'){
//        trapezoidMask.clear();
//          ofPath.clear();
//    }
//
//}




//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'c'){
    collectPoints.clear();
//                  ofPath.clear();
    }


}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
    ofPoint mouseposition(x,y);
    collectPoints.push_back(mouseposition);

    
}
//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
