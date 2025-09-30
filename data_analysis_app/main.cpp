#include "main_window.h"
#include <QApplication>
#include <QMainWindow>
#include <QPushButton>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  QMainWindow main_window;
  data_analysis_app::gui::configure_main_window(main_window);
  main_window.show();
  return app.exec();
}
