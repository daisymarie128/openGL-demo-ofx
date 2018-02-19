#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    shader.load("shaderTest/shader");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    // everything inside here like vertexes and textures
    // will have the shader applied to them
    shader.begin();
//    ofRect(0, 0, ofGetWidth(), ofGetHeight());
////    ofDrawPlane(0, 0, ofGetWidth(), ofGetHeight());
//    ofDrawPlane(ofGetWidth(), ofGetHeight());
//    drawRectangle(float x, float y, float z, float w, float h)
    ofRectangle(0, ofGetWidth(), ofGetHeight());
    shader.end();

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
