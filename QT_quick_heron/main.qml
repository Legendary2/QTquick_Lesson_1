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
     placeholderText: "Введите первое число"
     width: 350
     }

     TextField {
     id: field2
     objectName: "field2"
     placeholderText: "Введите второе число"
     width: 350
     }

     TextField {
     id: field3
     objectName: "field3"
     placeholderText: "Введите третье число"
     width: 350
     }

     Button {
     id: button
     text: qsTr("Вычислить площадь треугольника по формуле герона")
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
