import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Controls 2.15

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Вычисление площади треугольника")

    signal qmlSignal(string msg)

Column {
     spacing: 10
     anchors.centerIn: parent

     TextField {
     id: field1
     objectName: "field1"
     placeholderText: "Введите x1"
     width: 350
     }

     TextField {
     id: field2
     objectName: "field2"
     placeholderText: "Введите x2"
     width: 350
     }

     TextField {
     id: field3
     objectName: "field3"
     placeholderText: "Введите x3"
     width: 350
     }

     TextField {
     id: field4
     objectName: "field4"
     placeholderText: "Введите y1"
     width: 350
     }

     TextField {
     id: field5
     objectName: "field5"
     placeholderText: "Введите y2"
     width: 350
     }

     TextField {
     id: field6
     objectName: "field6"
     placeholderText: "Введите y3"
     width: 350
     }

     Button {
     id: button
     text: qsTr("Вычислить площадь треугольника по вершинам")
     width: 350
     onClicked: qmlSignal("площадь треугольника")
     }

     Text {
     text: "Ответ:"
     font.pixelSize: textArea.font.pixelSize
     }

     TextArea {
     id: textArea
     objectName: "textArea"
     wrapMode: TextArea.Wrap
     readOnly: true
     width: 350
     }
    }
}
