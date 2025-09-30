#include "main_window.h"
#include <QTabBar>
#include <QTest>
#include <qmainwindow.h>

class TestStaticMainComponents : public QObject {
  Q_OBJECT

private:
  QMainWindow main_window;

private slots:
  void TestMainWindowConfiguration();
  void TestMainTabBarConfiguration();
};

void TestStaticMainComponents::TestMainWindowConfiguration() {

  // arrange

  // act
  data_analysis_app::gui::configure_main_window(main_window);

  // assert
  QCOMPARE(main_window.windowTitle(), QString("Data Analysis Application"));
  QCOMPARE(main_window.width(), 800);
  QCOMPARE(main_window.height(), 600);

  QVERIFY(main_window.centralWidget() != nullptr);
  QVERIFY(qobject_cast<QTabBar *>(main_window.centralWidget()) != nullptr);
}

void TestStaticMainComponents::TestMainTabBarConfiguration() {
  // arrange
  data_analysis_app::gui::configure_main_window(main_window);
  auto *tab_bar = main_window.centralWidget();
  QVERIFY(tab_bar != nullptr);
  QVERIFY(qobject_cast<QTabBar *>(tab_bar) != nullptr);
  QTabBar *tab_bar_casted = qobject_cast<QTabBar *>(tab_bar);

  // act
  data_analysis_app::gui::configure_main_tab_bar(*tab_bar_casted);

  // assert
  // check number of tabs
  QCOMPARE(tab_bar_casted->count(), 2);

  // check tab names
  QCOMPARE(tab_bar_casted->tabText(0), QString::fromStdString("welcome"));
  QCOMPARE(tab_bar_casted->tabText(1),
           QString::fromStdString("data_selection"));
}

QTEST_MAIN(TestStaticMainComponents)
#include "main_window.test.moc"
