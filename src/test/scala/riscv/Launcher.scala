// See LICENSE.txt for license details.
package riscv

import chisel3.iotesters.{Driver, TesterOptionsManager}
import utils.TutorialRunner

object Launcher {
  val examples = Map(
	"Nor" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Nor(), manager) {
          (c) => new NorTests(c)
        }
      },
	"Not" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Not(), manager) {
          (c) => new NotTests(c)
        }
      },
	"Mux" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Mux(), manager) {
          (c) => new MuxTests(c)
        }
      },
	"Mux4" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Mux4(), manager) {
          (c) => new Mux4Tests(c)
        }
      },
	"Mux8" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Mux8(), manager) {
          (c) => new Mux8Tests(c)
        }
      },
	"Adder" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Adder(), manager) {
          (c) => new AdderTests(c)
        }
      },
	"Adder2" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Adder2(), manager) {
          (c) => new Adder2Tests(c)
        }
      },
	"Adder4" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Adder4(), manager) {
          (c) => new Adder4Tests(c)
        }
      },
	"Adder32" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Adder32(), manager) {
          (c) => new Adder32Tests(c)
        }
      },
	"AluOp" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new AluOp(), manager) {
          (c) => new AluOpTests(c)
        }
      },
	"Imme" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Imme(), manager) {
          (c) => new ImmeTests(c)
        }
      },
	"Alu" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Alu(), manager) {
          (c) => new AluTests(c)
        }
      },
	"Control" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Control(), manager) {
          (c) => new ControlTests(c)
        }
      },
	"Top" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Top(), manager) {
          (c) => new TopTests(c)
        }
      },
	"Regfile" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Regfile(), manager) {
          (c) => new RegfileTests(c)
        }
      },
	"Pc" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Pc(), manager) {
          (c) => new PcTests(c)
        }
      },
	"Instruction" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Instruction(), manager) {
          (c) => new InstructionTests(c)
        }
      },
	"Jalrr" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Jalrr(), manager) {
          (c) => new JalrrTests(c)
        }
      },
	"Memory" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new Memory(), manager) {
          (c) => new MemoryTests(c)
        }
      },
	"pipeline1" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new pipeline1(), manager) {
          (c) => new pipeline1Tests(c)
        }
      },
	"pipeline2" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new pipeline2(), manager) {
          (c) => new pipeline2Tests(c)
        }
      },
	"pipeline3" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new pipeline3(), manager) {
          (c) => new pipeline3Tests(c)
        }
      },
	"pipeline4" -> { (manager: TesterOptionsManager) =>
        Driver.execute(() => new pipeline4(), manager) {
          (c) => new pipeline4Tests(c)
        }
      }
  )
  def main(args: Array[String]): Unit = {
    TutorialRunner("examples", examples, args)
  }
}
	
